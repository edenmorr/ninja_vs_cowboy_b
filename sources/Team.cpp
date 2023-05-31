#include "Team.hpp"
#include "Character.hpp"
#include <iostream>
#include <numeric> 
#include <limits>
using namespace std;

namespace ariel{

double maxLimit = numeric_limits<double>::max();// the sentence is retrieving the maximum value that an int can hold using numeric_limits<int>::max() and assigning it to the variable maxLimit.
int limit =0;

Team::Team(Character* leader) : leader(leader) {
this->members.reserve(10);
if(leader->isInTeam()){
    throw runtime_error("leader is already inside team");
}
leader->setInTeam();
members.push_back(leader);
}

Team::~Team()
{
for(auto member : this->members)
{
delete member;
}
this->members.clear();
}

void Team::add(Character* leader) {
if(this->members.size() == 10)
    throw runtime_error("error: their are more then 10 members");
if(leader->isInTeam())
    throw runtime_error("leader is alredy inside team");
leader->setInTeam();
members.push_back(leader);
}

void Team::CowboysAttack(const Team *enemy)
{
      for (auto* character : this->members) {
        if (character->isAlive()) {
            Cowboy* cowboy = dynamic_cast<Cowboy*>(character);
            if (cowboy != nullptr) {
                Character* target = closestMember(enemy.members);
                if (target != nullptr) {
                    if (!target->isAlive()) {
                        target = closestMember(enemy.members);
                    }
                    if (target != nullptr) {
                        if (cowboy->hasboolets()) {
                            cowboy->shoot(target);
                        } else {
                            cowboy->reload();
                        }
                    }
                }
            }
        }
    }
}

    void Team::NinjasAttack(const Team &enemy)
    {
        for (auto *character : this->members)
        {
            if (!character->isAlive())
                continue;
            if (auto *nin = dynamic_cast<Ninja *>(character))
            {
                Character *target = closestMember(enemy.members);
                if (target == nullptr)
                {
                    return;
                }
                if (nin->distance(target) <= 1)
                    nin->slash(target);
                else
                    nin->move(target);
            }
        }
    }
    void Team::attack(Team * enemy)
    {
        if (enemy == nullptr)
            throw std::invalid_argument("need to pass enemy argument");
        if (!enemy->stillAlive())
            throw std::runtime_error("");
        this->changeCaptain();
        // first cowboys
        CowboysAttack(*enemy);
        // then ninjas
        NinjaAttack(*enemy);
    }

    int Team::stillAlive()
    {
        int aliveCount = 0;
        for (auto a : this->members)
        {
            if (a->isAlive())
                aliveCount++;
            return aliveCount;
        }
        return 0;
    }
    Character *Team::closestMember(Character * member, const vector<Character *> &team)
    {
        Character *temp;
        for (Character *enemy : team)
        {
            double distance = enemy->distance(this->leader);
            if (member->distance(enemy) < maxLimit && enemy->isAlive())
            {
                temp = enemy;
                maxLimit = member->distance(enemy);
            }
        }
        return temp;
    }

    void Team::print()
    {
    }

    // void Team::changeCaptain(){
    //     // this->leader = this->closestMember(members,leader);
    // }

    Character* Team::Getleader(){
        return this->leader;
    }

    vector<Character*> Team::GetMembers(){
        return this->members;
    }
}
