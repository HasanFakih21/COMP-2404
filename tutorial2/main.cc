#include <iostream>
using namespace std;
#include <string>

#include "Character.h"
#include "battle.h"

int main() {
    string name;
    int health, damage;
    cout << "Create a fighter:" << endl << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Health: ";
    cin >> health;
    cout << "Damage: ";
    cin >> damage;

    Character fighter(name,health,damage);

    cout << endl << "Create an orc:" << endl << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Health: ";
    cin >> health;
    cout << "Damage: ";
    cin >> damage;

    Character orc(name,health,damage);

    cout << endl;
    fighter.print();
    orc.print();

    Gondor::fight(fighter,orc);

    cout << endl;
    fighter.print();
    orc.print();

    Mordor::fight(fighter,orc);

    cout << endl;
    fighter.print();
    orc.print();

}
