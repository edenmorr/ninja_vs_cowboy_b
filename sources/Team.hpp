#include "Character.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "Point.hpp"
#include <vector>
#define TEAM_HPP
#pragma once

namespace ariel{
class Team
{
private:
vector<Character*> members;
Character* leader; // poiner to the leader of the group 
Team(Team &other);
public:
Team(Character* leader);
virtual ~Team();
virtual void add(Character* leader);
virtual int stillAlive();
virtual void attack(Team* team) = 0;
void print();
int size(){
    return 0;
}
Character* closestMember(Character *member, const vector<Character*> &team);
vector<Character*> GetMembers();
Character* Getleader();
void changeCaptain();
virtual void attack(Team* other);
void CowboysAttack(const Team *enemy);
void NinjasAttack(const Team *enemy);
};
}
