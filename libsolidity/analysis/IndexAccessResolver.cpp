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
/**
 * @author Artem Yurchenko <artemyurchenko@zoho.com>
 * @date 2021
 * In a chain of index accesses marks the final one.
 */

#include <libsolidity/analysis/IndexAccessResolver.h>

using namespace solidity::frontend;

bool IndexAccessResolver::visit(IndexAccess const& _access)
{
	_access.annotation().finalIndexAccess = true;
	return false;
}

void IndexAccessResolver::resolve(SourceUnit const& _source)
{
	_source.accept(*this);
}