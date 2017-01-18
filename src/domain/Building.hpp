//
// Created by mafn on 1/18/17.
//

#ifndef LINEARALGEBRA_BUILDING_HPP
#define LINEARALGEBRA_BUILDING_HPP

#include <string>
#include "Colour.hpp"

using std::string;

class Building {
public:
    Building(const string name, const int cost, const Colour colour);
    // TODO: we need to support constructing a Building using an inputstream << operator

    string name;
    // It should be noted that cost is also the amount of points you get for owning the building
    int cost;
    Colour colour;
private:

};

#endif //LINEARALGEBRA_BUILDING_HPP
