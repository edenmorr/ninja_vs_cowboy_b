#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include "Character.hpp"
#include <cmath>
#include <string>

using namespace std;
namespace ariel{ 
Character::Character(Point location, int Point_of_impact, string name)
    : location(location), Point_of_impact(Point_of_impact), name(name) {}

   
bool Character::isAlive() {
    return Point_of_impact > 0;
}

double Character::distance(const Character* other) const {
    return this->distance(other);
}
void Character::hit(int damage) {
    if(damage <0){
        throw invalid_argument("damage is negetive");
    }
    Point_of_impact -= damage;
    }


std::string Character::getName() const {
    return name;
}

Point Character::getLocation() const {
    return location;
}

void Character::print() const {
    std::cout << "Character: " << getName() << std::endl;
    std::cout << "Hit Points: " << Point_of_impact << std::endl;
    std::cout << "Location: " << "(" << location.getX() << "," << location.getY()<< ")" << endl;
    // Point.print();
}

}