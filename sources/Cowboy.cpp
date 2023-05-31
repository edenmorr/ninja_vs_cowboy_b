#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cassert>
#include <cmath>
#include <string>
#include "Cowboy.hpp"

namespace ariel{ 

Cowboy::Cowboy(string name,Point location):Character(location,110,name),bullets(6){}

void Cowboy::shoot(Character* enemy) {
 if (isAlive()&& bullets>0){
    enemy->Point_of_impact -=10;
 }
}

bool Cowboy::hasboolets() const {
    return bullets > 0;
}

void Cowboy::reload() {
    if(bullets<=0){
    bullets += 6;
    }
}
void Character::setInTeam(){
    this->inTeam = true;
}
bool Character::isInTeam(){
    return inTeam;
}
}
