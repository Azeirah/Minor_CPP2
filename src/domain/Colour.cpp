//
// Created by jazula on 1/19/17.
//

#include "Colour.hpp"

Colour colour_from_string(string input) {
    string colour_string = input;
    StringUtil::to_lower_in_place(colour_string);

    if (colour_string == "geel") {
        return Colour::YELLOW;
    } else if (colour_string == "groen") {
        return Colour::GREEN;
    } else if (colour_string == "blauw") {
        return Colour::BLUE;
    } else if (colour_string == "rood") {
        return Colour::RED;
    } else if (colour_string == "paars") {
        return Colour::PURPLE;
    } else {
        throw "error, something went wrong"; // todo exception handling
    }
}