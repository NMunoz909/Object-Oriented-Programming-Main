#include <iostream>
#include "rpg.h"

using namespace std;


/**
 * @brief Prints both player's name and their health.
 * Example Output for names Wiz and NPC
 * Wiz health: 75 NPC health: 100\n
 * 
 * @param player1
 * @param player2
*/
void displayStats(RPG player1, RPG player2){
    //Implement the brief
    printf("%s health: %i  %s health: %i\n", player1.getName().c_str(), player1.getHealth(), 
                                            player2.getName().c_str(), player2.getHealth());
}


/**
 * @brief Displays who wins based on who's alive. Use and if statement to check
 * whether player 1 is alive. If so, print that they won, else player 2 won.
 * 
 * Example Output:
 * Wiz defeated NPC! Good game!\n
 * 
 * @param player1
 * @param player2
*/
void displayEnd(RPG player1, RPG player2){
    //Implement brief
    if(player1.isAlive()){
        printf("%s defeated %s! Good Game!\n", player1.getName().c_str(), player2.getName().c_str());
    }
    else{
        printf("%s defeated %s! Goood Game!\n", player2.getName().c_str(), player1.getName().c_str());
    }
}


/**
 * @brief uses a while loop to check whether both players are alive.
 * If so, it calls displayStats((*player1), (*player2))
 * Inside the while loop it:
 * Then prints the name of player one to say that it is their turn
 * Then call (*player1).useSkill(player2)
 * Then prints"----------------------------------\n"
 * 
 * Repeat the process for player 2 acting on player 1 inside the same while loop
 * Then prints the name of player two to say that it is their
 * then call(*player2).useSkill(player1)
 * Then prints "---------------------------------\n"
 * 
 Refer to the Role Playing Game Part two instructions for the
 example out put
 *@param player1
 *@param player2
*/
void gameLoop(RPG * player1, RPG * player2){
    //implement brief
    while((*player1).isAlive(), (*player2).isAlive()){
        displayStats((*player1), (*player2));

    printf("%s's turn\n", (*player1).getName().c_str());
        
    }
    
}











int main(){
    RPG p1 = RPG("Wiz", 70, 45, 15, "mage");
    RPG p2 = RPG();

    //gameLoop(&p1, &p2);
    //displayEnd(p1, p2);
    

    return 0;

}

