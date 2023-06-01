#include "Character.hpp"
#include <iostream>
using namespace ariel;
using namespace std;

Character::Character(const Point& position, int hitPoint, const string& name):position(position), hitPoint(hitPoint), name(name){}

Point& Character::getLocation(){
    return position;
}

void Character::setPosition(ariel::Point other){

    this->position.setX(other.getX());
    this->position.setY(other.getY());

}


int Character::getHp() const{
    return hitPoint;
}
const string& Character::getName() const{
    return name;
}

bool Character::isAlive() const{
    if(hitPoint > 0){
        return true;
    }
    return false;
}

bool Character::getInTeam() const{
    return inTeam;
}

void Character::setInTeam(bool inTeam){
    this->inTeam = inTeam;
}

double Character::distance(Character* other){
    return position.distance(other->getLocation());
}

string Character::print() const{
    return name + " " + position.print() + " " + to_string(hitPoint);
}

void Character::hit(int damage){
    if(damage < 0){
        throw invalid_argument("damage cannot be negative");
    }
    hitPoint -= damage;
}
