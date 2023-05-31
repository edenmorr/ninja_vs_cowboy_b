#include "Character.hpp"
#pragma once

namespace ariel{
class Ninja:public Character
    {
    private:
    int speed;
    int health;

    public:
    Ninja(Point location,string name,int initialHealth, int initialSpeed);
    void move(Character* enemy);
    void slash(Character* enemy);

    //for tests
    int getSpeed();
    void setSpeed(int speed);
    // string print();
    };
 
}