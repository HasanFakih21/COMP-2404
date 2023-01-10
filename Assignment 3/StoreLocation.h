#ifndef STORELOCATION_H
#define STORELOCATION_H

#include <iostream>
#include <string>

#include "defs.h"
#include "Location.h"

using namespace std;


class StoreLocation: public Location {
	public:
        StoreLocation();
        void setProduct(string product);
        int getFreeSpace();
        int getCapacity();
        bool add(string product, int quantity);
        bool remove(int amount);

    private:
        static const char code = 'A';
        static const int capacity = SLOC_CAPACITY;
        static const int  nextId = 20;;
        static int increment;
	
};
#endif