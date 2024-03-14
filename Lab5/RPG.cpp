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

/**
 * @brief sets the skills based on the RPG's role
 * 
 */
void RPG::setSkills(){
    if (type == "mage"){
        skills[0] = "fire";
        skills[1] = "thunder";
    }  else if (type == "thief"){
        skills[0] = "pilfer";
        skills[1] = "jab";
    } else if (type == "archer"){
        skills[0] = "parry";
        skills[1] = "crossbow_attack";
    } else {
        skills[0] = "slash";
        skills [1] = "parry";
    }

}

/**
 * @brief Prints along the lines of NAME used SKILL on OPPONENT
 * 
 * @param skill
 * @param opponent
*/
void RPG::printAction(string skill, RPG opponent){
    printf("%s used %s on %s\n", name.c_str(), skill.c_str(), opponent.getName().c_str());
}


/**
 * @brief updates health into new_health
 * 
 * @param new_health
*/
void RPG::updateHealth(int new_health){
    health = new_health; // This here reassigns health to new_health
}

/**
 * @brief returns whether health is greater than 0
 * 
 * @return true
 * @return false
*/
bool RPG::isAlive() const{ //YOU MUST INCLUDE CONST,as it needs to match the member function in rpg.h
    return health > 0;
}

/**
 * @brief attack decreases the opponent's health by(strenght-opponents defense)
 * In other words, the opponent's defense should soften the blow from the attack
 * 
 * For example, if opponent's health is 100, opponent defense is 5, abd player's
 * strength is 20, then after the attack, opponent's health should be
 * 85 (i.e. 100-(20-5)).
 * 
 * First calculate the opponent's health, then use(*opponent).getUpdate(new_health)
 * to update their health.
*/
void RPG::attack(RPG *opponent){
    int opp_health = (*opponent).getHealth();
    int opp_defense = (*opponent).getDefense();
    int new_health;

    if((strength - opp_defense) > 0){
    int new_health = opp_health -(strength - opp_defense);
    (*opponent).updateHealth(new_health);
    }
    else{
        int new_health = opp_health - 0;
        (*opponent).updateHealth(new_health);
    }

}

/**
 * @brief Promts the user to choose a skill and calls printAction() and attack()
 * 
 * @param opponent
*/
void RPG::useSkill(RPG * opponent){
    // use a for loop to print out all the player's skill
    // the code within your loop should be:
    // printf("Skill %i: %s\n", i, skills[i].c_str())
    // where i is the index given your for loop
    // Recall that SKILL_SIZE is set to 2 within RPG.H
    // The values of i should be 0<= i < SKILL_SIZE
    for(int i = 0; i < SKILL_SIZE; i++){
        printf("Skill %i: %s\n", i, skills[i].c_str());
    }

    // create an int called chosen_skill_index
    int chosen_skill_index;

    // use a print to output "Choose a skill to use: Enter 0 or 1\n" on the terminal
    printf("Choose a skill to use: Enter 0 or 1\n");
    cin >> chosen_skill_index;
    // get user input and assign it to chose_skill_index
    //(e.g. cin>>)


    // assigns the chosen_skill into a string called chosen_skill
    // no modification needed here
    //string chosen_skill = skills[chosen_skill_index];
    string chosen_skill = skills[chosen_skill_index];
    // call printAction(string, RPG) and use chosen_skill and (*opponent)
    //as the parameters
    printAction(chosen_skill, (*opponent));
    // call attack on opponent
    attack(opponent);
}
