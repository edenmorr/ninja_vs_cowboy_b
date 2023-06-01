#ifndef COWBOY_VS_NINJA_A1_TEAM2_HPP
#define COWBOY_VS_NINJA_A1_TEAM2_HPP

#include "Team.hpp"


namespace ariel{
    class Team2: public Team{

    public:
        Team2(Character* leader);
        ~Team2()override;
        void add(Character* character) override;
        int stillAlive();
        void attack(Team* team);
    };
}

#endif
