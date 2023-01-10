#include "Room.h"

Room::Room(string name, int capacity, int computers, bool whiteboard){
	this->name = name;
    this->capacity = capacity;
    this->computers = computers;
    this->whiteboard = whiteboard;
}

Room::Room(Room& copy) {
    this->name = copy.name;
    this->capacity = copy.capacity;
    this->computers = copy.computers;
    this->whiteboard = copy.whiteboard;
}


//setters
void Room::setName(string name){
	this->name = name;
}

void Room::setCapacity(int capacity){
	this->capacity = capacity;
}

void Room::setComputers(int computers){
	this->computers = computers;
}

void Room::setWhiteboard(bool whiteboard){
	this->whiteboard = whiteboard;
}


//getters
string Room::getName(){ return name; }
int Room::getCapacity(){ return capacity; }
int Room::getComputers(){ return computers; }
bool Room::hasWhiteboard(){ return whiteboard; }


//other
bool Room::meetsCriteria(int capacity, int computers, bool whiteboard){
    if(this->capacity>=capacity && this->computers >= computers && this->whiteboard == whiteboard) {
        return true;
    }
    else {
        return false;
    }
}

bool Room::lessThan(Room& r) {
    if(this->name.compare(r.name) < 0) {
        return true;
    }
    else {
        return false;
    }
}

void Room::print(){
	cout << getName()<<" "<<getCapacity()<<", "<<getComputers()<<", "<<hasWhiteboard()<<endl;
}
