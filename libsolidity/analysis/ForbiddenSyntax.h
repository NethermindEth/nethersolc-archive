/*
	This file is part of solidity.

	solidity is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	solidity is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with solidity.  If not, see <http://www.gnu.org/licenses/>.
*/
// SPDX-License-Identifier: GPL-3.0

#pragma once

#include <libsolidity/ast/ASTAnnotations.h>
#include <libsolidity/ast/ASTForward.h>
#include <libsolidity/ast/ASTVisitor.h>
#include <libsolidity/ast/Types.h>

namespace solidity::langutil
{
class ErrorReporter;
}

namespace solidity::frontend
{

/**
 * The module that performs syntax analysis on the AST specific to Warp and disallows:
 * msg.value
 * tx.origin
 * tx.gasprice
 * block.basefee
 * block.chainid
 * block.coinbase
 * block.difficulty
 * block.gaslimit
 * gasleft()
 * selfdestruct()
 * blockhash()
 */
class ForbiddenSyntax: private ASTConstVisitor
{
public:
	/// @param _errorReporter provides the error logging functionality.
	ForbiddenSyntax(langutil::ErrorReporter& _errorReporter): m_errorReporter(_errorReporter) {}

	bool containsForbiddenSyntax(ASTNode const& _astRoot);

private:
	bool visit(FunctionDefinition const& _sourceUnit) override;
	bool visit(MemberAccess const& _memberAccess) override;
	bool visit(TryCatchClause const& _tryCatchClause) override;

	langutil::ErrorReporter& m_errorReporter;
};

}
