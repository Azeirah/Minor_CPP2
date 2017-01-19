//
// Created by mafn on 1/18/17.
//

#ifndef LINEARALGEBRA_COLORS_HPP
#define LINEARALGEBRA_COLORS_HPP

#include <iostream>
#include <algorithm>
#include "../util/StringUtil.hpp"

using std::istream;

enum class Colour
{
    YELLOW,
    GREEN,
    BLUE,
    RED,
    PURPLE,
};

Colour colour_from_string(string input);

#endif //LINEARALGEBRA_COLORS_HPP
