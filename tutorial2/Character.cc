#include "Character.h"

Character::Character(string& name, int maxHealth, int damage){
	this->name = name;
    this->maxHealth = maxHealth;
    currentHealth = maxHealth;
    this->damage = damage;
}

void Character::takeDamage(int damage) {
    if((currentHealth - damage) < 0) {
        currentHealth = 0;
    }
    else {
        currentHealth-=damage;
    }
}

int Character::strike() {
    return damage;
}

string Character::getName() {
    return name;
}

void Character::print() {
    cout << getName() << ": " << currentHealth << endl << endl;
}