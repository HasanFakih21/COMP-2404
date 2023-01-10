#ifndef BATTLE_H
#define BATTLE_H

#include <iostream>
#include <string>
#include "Character.h"

using namespace std;

namespace Gondor {
    void fight(Character& fighter, Character& orc);
}

namespace Mordor {
    void fight(Character& fighter, Character& orc);
}

void printAttack(string attacker, string defender, int damage);

#endif