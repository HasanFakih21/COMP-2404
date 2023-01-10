#ifndef STORELOCATION_H
#define STORELOCATION_H

#include <iostream>
#include <string>

#include "defs.h"
#include "Location.h"

using namespace std;

static const char code = 'A';
static const int capacity = SLOC_CAPACITY;
static const int  nextId = 20;


class StoreLocation: public Location {
	public:
        StoreLocation();
        void setProduct(string product);
        int getFreeSpace();
        int getCapacity();
        bool add(string product, int quantity);
        bool remove(int quantity);

    private:
        int increment = 0;
	
};
#endif