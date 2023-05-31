#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Point.hpp"
#include <cmath>
#include <string>
#pragma once

using namespace std;
namespace ariel{ 
class Character{

public:
bool inTeam;
Point location;
string name;
int Point_of_impact;
virtual bool isAlive();
Character(Point location, int Point_of_impact,string name);
// Character();
double distance(const Character* other) const;
void hit(int damage);
string getName() const;
Point getLocation() const;
void print() const;
void setInTeam();
bool isInTeam();
};
}