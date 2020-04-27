/**
 *   SFCGAL
 *
 *   Copyright (C) 2020 Oslandia <infos@oslandia.com>
 *   Copyright (C) 2020 IGN (http://www.ign.fr)
 *
 *   This library is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU Library General Public
 *   License as published by the Free Software Foundation; either
 *   version 2 of the License, or (at your option) any later version.
 *
 *   This library is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *   Library General Public License for more details.

 *   You should have received a copy of the GNU Library General Public
 *   License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _SFCGAL_ALGORITHM_LINESEGMENT_H_
#define _SFCGAL_ALGORITHM_LINESEGMENT_H_

#include <SFCGAL/config.h>

namespace SFCGAL
{

// Class forward delclarations.
class LineString ;

namespace algorithm
{

/**
 * @brief Retrieve a segment of a specified 2D LineString,
 *   between the specified fractional distances from the start
 *   of the specified LineString.
 * @param ls The specified LineString.
 * @param start The fraction along the specified LineString defining the
 *   start of the desired segment.
 * @param end The fraction along the specified LineString defining the
 *   end of the desired segment.
 * @note Negative values of {@code start} and/or {@code end} will be
 *   interpreted as a fractional distance taken from the end of the
 *   specified LineString. +/-0 will always be interpreted as the start
 *   of {@code ls}.
 * @return The specified 2D line segment.
 * @throws Exception If the range specified equates to a line segment with
 *   negative length.
 */
SFCGAL_API std::unique<LineString> lineSegment( const LineString& ls, double start, double end ) ;

/**
 * @brief Retrieve a segment of a specified 3D LineString,
 *   between the specified fractional distances from the start
 *   of the specified LineString.
 * @param ls The specified LineString.
 * @param start The fraction along the specified LineString defining the
 *   start of the desired segment.
 * @param end The fraction along the specified LineString defining the
 *   end of the desired segment.
 * @note Negative values of {@code start} and/or {@code end} will be
 *   interpreted as a fractional distance taken from the end of the
 *   specified LineString. +/-0 will always be interpreted as the start
 *   of {@code ls}.
 * @return The specified 3D line segment.
 * @throws Exception If the range specified equates to a line segment with
 *   negative length.
 */
SFCGAL_API std::unique<LineString> lineSegment3D( const LineString& ls, double start, double end ) ;

} // ! namespace algorithm

} // ! namespace SFCGAL


#endif // ! _SFCGAL_ALGORITHM_LINESEGMENT_H_