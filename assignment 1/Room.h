#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include <string>

using namespace std;

class Room {
		
	public:
		//constructor
		Room(string name, int capacity, int computers, bool whiteboard);
        Room(Room&);
		
				
		//setters
		void setName(string);
		void setCapacity(int);
		void setComputers(int);
		void setWhiteboard(bool);
		
		//getters
		string getName();
		int getCapacity();
		int getComputers();
		bool hasWhiteboard();

        //other
		bool meetsCriteria(int capacity, int computers, bool whiteboard);
        bool lessThan(Room& r);
        void print();
		
	private:
		//variables
        string name;
		int capacity;
		int computers;
		bool whiteboard;
	
	
};
#endif
