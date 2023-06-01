#ifndef COWBOY_VS_NINJA_A1_CHARACTER_HPP
#define COWBOY_VS_NINJA_A1_CHARACTER_HPP
#include "Point.hpp"

namespace ariel
{
    class Character
    {
        Point position;
        int hitPoint;
        string name;
        bool inTeam = false;

    public:
        Character(const Point &position, int hitPoint, const string &name);
        virtual ~Character() = default;
        Point &getLocation();
        void setPosition(Point other);
        int getHp() const;
        const string &getName() const;
        bool getInTeam() const;
        void setInTeam(bool inTeam);
        bool isAlive() const;
        virtual double distance(Character *other);
        string print() const;
        void hit(int damage);
    };
}

#endif 
