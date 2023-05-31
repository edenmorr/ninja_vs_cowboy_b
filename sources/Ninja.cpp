#include "Ninja.hpp"
#include <iostream>
#include <string>
#include "Character.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "OldNinja.hpp"


using namespace std;
namespace ariel
{
    Ninja::Ninja(Point location,string name,int life,int speed):Character(location,life,name),speed(speed){}


    void Ninja::slash(Character* enemy)
    {
        if((Character::distance(enemy))<=speed){
            enemy->hit(40);
        }
        else {cout<<"foe is to far!!!\n";}// ninja cannot move more then his speed on every turn;
    };
    
    void Ninja::move(Character* enemy)
    {       
    Point temp = Point::moveTowards(this->getLocation(),enemy->getLocation(),this->speed);
    cout<< "new pos";
    temp.print();
    }
    
    int Ninja::getSpeed()
    {
        return this->speed;
    };
    void Ninja::setSpeed(int speed)
    {
        this->speed = speed;
    };
}