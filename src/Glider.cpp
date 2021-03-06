/*
 * Polygon-4 Engine
 * Copyright (C) 2015 lzwdgc
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <Polygon4/Glider.h>

#include <Polygon4/Engine.h>

#include <tools/Logger.h>
DECLARE_STATIC_LOGGER(logger, "glider");

namespace polygon4
{

Glider::Glider(const Base &rhs)
    : Base(rhs)
{
}

float Glider::getCapacity() const
{
    return maxweight - weight;
}

} // namespace polygon4
