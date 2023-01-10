#ifndef LIBRARY_H
#define LIBRARY_H

#define MAX_ARR 64

#include "Student.h"
#include "Room.h"
#include "Reservation.h"
#include <iostream>
#include <string>

using namespace std;

class Library {
		
	public:
		//constructor
		Library();

        //destructor
        ~Library();

        //add functions
        bool addStudent(const string& name, const string& number);
        bool addRoom(string name, int capacity = 1, int computers = 0, bool whiteboard = false);

		//getters
		bool getStudent(const string& name, Student** student);
        bool getRoom(const string& roomName, Room** room);

		//other
		void printReservations();
        bool isFree(const string& room, Date&);
        bool makeReservation(const string& student, const string& room, Date&);
        void update(Date&);

	private:
		//variables
        Student* students[MAX_ARR];
        int student_size;
        Room* rooms[MAX_ARR];
        int room_size;
        Reservation* reservations[MAX_ARR];
        int reservation_size;
		
};
#endif
