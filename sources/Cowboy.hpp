#ifndef COWBOY_VS_NINJA_A1_COWBOY_HPP
#define COWBOY_VS_NINJA_A1_COWBOY_HPP

#include "Character.hpp"

namespace ariel{
    class Cowboy: public Character{
    private:
        int bullets;
    public:
        Cowboy(const string& name, Point position);
        ~Cowboy()override;

        int getBullets() const;
        bool hasboolets() const;

        void shoot(Character* target);
        void reload();
    };
}

#endif 
