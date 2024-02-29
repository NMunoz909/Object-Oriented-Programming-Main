#ifndef RPG_H
#define RPG_H

#include <string>

using namespace std;

const int SKILL_SIZE = 2;

class RPG {
    public:
        //constructors 
        RPG();
        RPG(string name, int health, int strength, int defense, string type);
        void setSkills();
        void printAction(string skill, RPG opponent);
        void updateHealth(int new_health);
        void attack(RPG *opponent);
        void useSkill(RPG *opponent);
    
        bool isAive() const;
        string getName() const;
        int getHealth() const;
        int getStrength() const;
        int getDefense() const;

        //complete rest

    private: 
        //complete rest
        string type; //warrior, mage, thief, archer
        string skills[SKILL_SIZE];
        string name;
        int health;
        int strength;
        int defense; 
        



};
#endif