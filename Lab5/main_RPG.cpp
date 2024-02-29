#include <iostream>
#include "rpg.h"

using namespace std;

int main(){
    RPG p1 = RPG("Wiz", 70, 45, 15, "mage");
    RPG p2 = RPG();

    printf("%s Current Stats\n", p1.getName().c_str());
    printf("Health: %i\t Strength: %i\t Defense: %i\n", p1.getHealth(), p1.getStrength(), p1.getDefense());

    // DO THE SAME FOR p2

    // CALL updateHealth(0) on either p1 and p2

    // Print out the new health 

    // CALL isAlive() on both p1 and p2

    return 0;

}

