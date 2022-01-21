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

#include <libsolidity/analysis/ForbiddenSyntax.h>

#include <libsolidity/ast/AST.h>
#include <libyul/AST.h>

#include <liblangutil/ErrorReporter.h>

#include <string>

using namespace std;
using namespace solidity;
using namespace solidity::langutil;
using namespace solidity::frontend;
using namespace solidity::util;

bool ForbiddenSyntax::containsForbiddenSyntax(ASTNode const& _astRoot)
{
	_astRoot.accept(*this);
	return !Error::containsErrors(m_errorReporter.errors());
}

bool ForbiddenSyntax::visit(TryCatchClause const& _tryCatch)
{
	m_errorReporter.syntaxError(3420_error, _tryCatch.location(), "Warp does not support try catch");
	return false;
}

bool ForbiddenSyntax::visit(FunctionDefinition const& _funcDef)
{
	const auto functionName = _funcDef.name();
	if (functionName == "keccak256" || functionName == "selfdestruct" || functionName == "blockhash")
	{
		m_errorReporter.syntaxError(3420_error, _funcDef.location(), "Warp does not support " + functionName);
		return false;
	}

	return true;
}

bool ForbiddenSyntax::visit(MemberAccess const& _memberAccess)
{
	auto const* expr = &_memberAccess.expression();
	auto identifier = dynamic_cast<Identifier const*>(expr);
	const auto memberName = _memberAccess.memberName();
	if (identifier == nullptr)
	{
		return true;
	}

	if ((identifier->name() == "msg" && memberName == "value") || (identifier->name() == "tx" && memberName == "origin")
		|| (identifier->name() == "tx" && memberName == "gasprice")
		|| (identifier->name() == "block" && memberName == "basefee")
		|| (identifier->name() == "block" && memberName == "chainid")
		|| (identifier->name() == "block" && memberName == "coinbase")
		|| (identifier->name() == "block" && memberName == "difficulty")
		|| (identifier->name() == "block" && memberName == "gaslimit"))
	{
		std::string errorString("Warp does not support " + identifier->name() + "." + memberName);
		m_errorReporter.syntaxError(3420_error, _memberAccess.location(), errorString);
		return false;
	}

	return true;
}
