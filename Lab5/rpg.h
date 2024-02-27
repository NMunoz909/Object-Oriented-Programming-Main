#ifndef RPG_H
#define RPG_H

using namespace std;

const int SKILL_SIZE = 2;

class RPG {
    public:
        //constructors 
        RPG();
        RPG(string name, int health, int strength, int defense, string type);

        //complete rest

    private: 
        //complete rest
        string type; //warrior, mage thief, archer
        string skills[SKILL_SIZE];



};
#endif