#ifndef COWBOY_VS_NINJA_A1_TEAM_HPP
#define COWBOY_VS_NINJA_A1_TEAM_HPP
constexpr int  MAX_WARRIORS = 10;

#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"
#include "OldNinja.hpp"
#include "Cowboy.hpp"


namespace ariel{
    class Team{
    protected:
        Character* warriors[MAX_WARRIORS];
        Character* leader;
        int size; //number of warriors in the team
    public:
        Team(Character* leader);
        virtual ~Team();

        virtual void add(Character* character); 

        void attack(Team* team);

        void closestToLeader();

        Character* closestVictim(Team* team);

        int stillAlive();

        void print() const;
        

    };
}

#endif 
