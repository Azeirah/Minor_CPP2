//
// Created by jazula on 1/19/17.
//

#include "StringUtil.hpp"
#include <algorithm>

void StringUtil::convert_chars_in_place(string& input, const char from, const char to)
{
    std::replace(input.begin(), input.end(), from, to);
}

void StringUtil::to_lower_in_place(string& input)
{
    std::transform(input.begin(), input.end(), input.begin(), ::tolower);
}

void StringUtil::remove_char_in_place(string& input, const char to_remove)
{
    input.erase(std::remove(input.begin(), input.end(), to_remove), input.end());
}

void StringUtil::remove_all_new_lines_in_place(string& input)
{
    StringUtil::remove_char_in_place(input, '\n');
    StringUtil::remove_char_in_place(input, '\r');
}
