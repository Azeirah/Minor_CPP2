//
// Created by jazula on 1/19/17.
//

#ifndef LINEARALGEBRA_STRINGUTIL_HPP
#define LINEARALGEBRA_STRINGUTIL_HPP

#include <string>

using std::string;

class StringUtil {
public:
    static void convert_chars_in_place(string& input, const char from, const char to);
    static void to_lower_in_place(string& input);
    static void remove_char_in_place(string& input, const char to_remove);
    static void remove_all_new_lines_in_place(string& input);
};


#endif //LINEARALGEBRA_STRINGUTIL_HPP