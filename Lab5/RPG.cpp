#include <iostream>

#include "rpg.h"

using namespace std;
// Constructs NPC 
RPG::RPG(){
    name = "NPC";
    health = 100;
    strength = 10;
    defense = 10;
    type = "warrior";
    skills[0] = "slash";
    skills[1] = "parry";


}

// Creating new placeholders for the overloaded member function
RPG::RPG(string name, int health, int strength, int defense, string type){
    this->name = name;
    this->health = health;
    this->strength = strength;
    this->defense = defense;
    this->type = type;

    setSkills();

}
//Implementing accessor functions
// These simply return the things they say
string RPG::getName() const{
    return name;
}

int RPG::getHealth() const{
    return health;
}

int RPG::getStrength() const{
    return strength; 
}

int RPG::getDefense() const{
    return defense;
}


