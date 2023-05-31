#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
#include "Character.hpp"
#include <cmath>
#include <string>
#pragma once
namespace ariel{ 
class Cowboy:public Character
    {
protected:
    int bullets;
    int damage;

public:
    Cowboy(string name ,Point location);
    void shoot(Character* enemy);
    bool hasboolets() const;
    void reload();
    string print();
};
}
