#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include <string>

using namespace std;

class Character {
		
	public:

		Character(string& name, int maxHealth, int damage);
		
		void takeDamage(int damage);
		int strike();
        void print();
		
		string getName();

	private:

		string name;
		int maxHealth;
		int currentHealth;
        int damage;

};
#endif