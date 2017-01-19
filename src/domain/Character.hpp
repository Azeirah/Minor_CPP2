//
// Created by jazula on 1/18/17.
//

#ifndef LINEARALGEBRA_CHARACTER_HPP
#define LINEARALGEBRA_CHARACTER_HPP

#include <string>
#include <iostream>
#include "Colour.hpp"

using std::istream;
using std::ostream;
using std::string;

class Character {
public:
    Character();

    string name;
    // ability, perhaps as a lambda
    Colour colour;
    size_t order_number;

    friend istream& operator>>(istream& input, Character& character);
    friend ostream& operator<<(ostream& output, Character& character);
};


#endif //LINEARALGEBRA_CHARACTER_HPP
