#ifndef WHLOCATION_H
#define WHLOCATION_H

#include <iostream>
#include <string>

#include "defs.h"
#include "Location.h"

using namespace std;

class WHLocation: public Location {
	public:
        WHLocation();
        int getCapacity();
        bool add(string product, int quantity);
        bool remove(int amount);

    private:
        static const char code = 'B';
        static const int capacity = WHLOC_CAPACITY;
        static const int nextId = 20;
        static int increment;
};
#endif