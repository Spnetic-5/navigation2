// Copyright (c) 2018 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef NAV2_UTIL__STRING_UTILS_HPP_
#define NAV2_UTIL__STRING_UTILS_HPP_

#include "geometry_msgs/msg/point.hpp"

#include <string>
#include <vector>

namespace nav2_util
{

typedef std::vector<std::string> Tokens;

/** @brief Remove leading slash from a topic name
 * @param in String of topic in
 * @return String out without slash
*/
std::string strip_leading_slash(const std::string & in);

/** @brief Split a string at the delimiters
 * @param in String to split
 * @param Delimiter criteria
 * @return Tokens
*/
Tokens split(const std::string & tokenstring, char delimiter);

/** @brief Parse a vector of vector of floats from a string.
 * @param input
 * @param error_return
 * Syntax is [[1.0, 2.0], [3.3, 4.4, 5.5], ...] */
std::vector<std::vector<float>> parseVVF(const std::string & input, std::string & error_return);

/**
 * @brief Make the vector from the given string.
 * @param str_pts
 * @param vector_pts
 * Format should be bracketed array of arrays of floats, like so: [[1.0, 2.2], [3.3, 4.2], ...]
 *
 */
bool makeVectorPointsFromString(const std::string & pts_str,
  std::vector<geometry_msgs::msg::Point> & vec_pts); 

}  // namespace nav2_util

#endif  // NAV2_UTIL__STRING_UTILS_HPP_
