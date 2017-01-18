//
// Created by jazula on 1/18/17.
//

#ifndef LINEARALGEBRA_CHARACTER_HPP
#define LINEARALGEBRA_CHARACTER_HPP

#include <string>
#include "Colour.hpp"

using std::string;

class Character {
public:
    Character(const string _name, const Colour _colour, const size_t _order_number);

    string name;
    // ability, perhaps as a lambda
    Colour colour;
    size_t order_number;
};


#endif //LINEARALGEBRA_CHARACTER_HPP
