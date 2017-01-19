//
// Created by jazula on 1/18/17.
//

#include "Character.hpp"
#include <iostream>

Character::Character()
{}

istream& operator>>(istream& input, Character& character)
{
    input >> character.order_number >> character.name;

    if (!input.eof()) {
        string colour_string;
        input >> colour_string;
        character.colour = colour_from_string(colour_string); //todo try catch here
    } else {
        character.colour = Colour::NONE;
    }

    return input;
}

ostream& operator<<(ostream& output, Character& character)
{
    output
        << "Name: " << character.name << ' '
        << "Number:"<< character.order_number ;

    return output;
}
