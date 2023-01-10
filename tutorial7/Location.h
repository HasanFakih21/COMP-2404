#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <string>

using namespace std;

static const string NONE = "Empty";

class Location {
	public:
		Location(char a, int b);
        string getId();
        string getProduct();
        int getQuantity();
        bool isEmpty();
        bool isAvailable();
        void print();
        virtual int getCapacity();
        virtual bool add(string name, int quantity);
        virtual bool remove(int quantity);
        
	
	private:
        string id;
        string product;
        int quantity;
        
};
#endif