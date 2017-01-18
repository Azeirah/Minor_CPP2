//
//  Player.hpp
//  socketexample
//
//  Created by Bob Polis on 23-11-15.
//  Copyright © 2015 Avans Hogeschool, 's-Hertogenbosch. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <string>
#include "domain/Building.hpp"
#include "domain/Character.hpp"
#include <memory>
#include <vector>

using std::unique_ptr;
using std::vector;

class Player {
public:
    Player();
    Player(const std::string& name);

    std::string name;
    int gold;
    vector<unique_ptr<Building>> buildings;
    vector<unique_ptr<Character>> characters;
};

#endif /* Player_hpp */
