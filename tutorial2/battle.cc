#include "battle.h"

void Gondor::fight(Character& fighter, Character& orc) {
    fighter.takeDamage(orc.strike()-1);
    printAttack(orc.getName(),fighter.getName(),orc.strike()-1);
    orc.takeDamage(fighter.strike()+1);
    printAttack(fighter.getName(),orc.getName(),fighter.strike()+1);
}

void Mordor::fight(Character& fighter, Character& orc) {
    fighter.takeDamage(orc.strike()+1);
    printAttack(orc.getName(),fighter.getName(),orc.strike()+1);
    orc.takeDamage(fighter.strike()-1);
    printAttack(fighter.getName(),orc.getName(),fighter.strike()-1);
}

void printAttack(string attacker, string defender, int damage) {
    cout << attacker << " hits " << defender << " for " << damage << " damage!" << endl; 
}