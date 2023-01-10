#ifndef RESERVATION_H
#define RESERVATION_H

#include "Student.h"
#include "Room.h"
#include "Date.h"
#include <iostream>
#include <string>

using namespace std;

class Reservation {
		
	public:
		//constructor
		Reservation(Student* student, Room* room, Date& date);

        //destructor
        ~Reservation();

		//getters
		Student* getStudent();
        Room* getRoom();
        Date* getDate();

		//other
		void print();
        bool lessThan(Reservation& res);
        bool overlaps(string r, Date& d);

	private:
		//variables
		Student* student;
        Room* room;
        Date* date;
		
	
};
#endif
