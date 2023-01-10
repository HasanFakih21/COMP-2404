#include "Reservation.h"

Reservation::Reservation(Student* student, Room* room, Date& date) {
	this->student = student ;
    this->room = room;
    this->date = &date;
}

Reservation::~Reservation() {
    delete date;
}


//getters
Student* Reservation::getStudent(){ return student; }
Room* Reservation::getRoom(){ return room; }
Date* Reservation::getDate(){ return date; }


//other
bool Reservation::lessThan(Reservation& res) {
    if(this->date->lessThan(*res.date)) {
        return true;
    }
    else {
        return false;
    }
}

bool Reservation::overlaps(string r, Date& d) {
    if(this->room->getName().compare(r) == 0 && this->date->overlaps(d)) {
        return true;
    }
    else {
        return false;
    }
}

void Reservation::print(){
	cout << "Reservation: " << getStudent()->getName() <<" "<< getRoom()->getName() <<", "<< getDate()->getMonthName() <<", " << getDate()->getDay() << endl;
}