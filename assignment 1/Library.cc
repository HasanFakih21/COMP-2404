#include "Library.h"

Library::Library(){
	student_size = 0;
    room_size = 0;
    reservation_size = 0;
}

Library::~Library(){
    for (int i=0; i<student_size; ++i) {
        delete students[i];
    }
    for (int i=0; i<room_size; ++i) {
        delete rooms[i];
    }
    for (int i=0; i<reservation_size; ++i) {
        delete reservations[i];
    }
}


//add functions
bool Library::addStudent(const string& name, const string& number) {
    if (student_size >= MAX_ARR) {
        return false;
    }
    else {
        students[student_size] = new Student(name, number);
        ++student_size;
        return true;
    }
}

bool Library::addRoom(string name, int capacity, int computers, bool whiteboard) {
    if (room_size >= MAX_ARR) {
        return false;
    }
    else {
        rooms[room_size] = new Room(name, capacity, computers, whiteboard);
        ++room_size;
        return true;
    }
}


//getters
bool Library::getStudent(const string& name, Student** student) {
    for (int i=0; i<student_size; ++i) {
        if(students[i]->getName().compare(name) == 0) {
            student = &students[i];
            //cout << (**student).getName() << endl;
            //cout << "is it here?" << endl;
            return true;
        }
    }
    return false;
}

bool Library::getRoom(const string& roomName, Room** room) {
   for (int i=0; i<room_size; ++i) {
        if(rooms[i]->getName().compare(roomName) == 0) {
            room = &rooms[i];
            //cout << "room gets address" << &rooms[i] << endl;
            //cout << (**room).getName() << endl;
            return true;
        }
    }
    return false; 
}

//other
bool Library::isFree(const string& room, Date& d) {
    Room** pointer = NULL;
    if(!(getRoom(room, pointer))) {
        return false;
    }
    for (int i=0; i<reservation_size; ++i) {
        if(reservations[i]->overlaps(room,d)) {
            return false;
        }
    }
    return true;
}

 bool Library::makeReservation(const string& student, const string& room, Date& d) {
     
     Room** roomPointer;
     Student** studentPointer;
     if (reservation_size >= MAX_ARR) {
        return false;
    }
     if(!(getStudent(student, studentPointer) || !(getRoom(room, roomPointer)))){
         return false;
     }
     if(isFree(room,d)){
         reservations[reservation_size] = new Reservation(*studentPointer,*roomPointer,d);
         ++reservation_size;
         return true;
     }
     return false;
 }

 void Library::update(Date& d) {
     int original_size = reservation_size;
     for (int i=0; i<reservation_size; ++i) {
        if(reservations[i]->getDate()->lessThan(d)) {
            delete reservations[i];
            reservations[i] = NULL;
            --reservation_size;
        }
    }
    for(int i = 0; i < reservation_size; ++i) {
        if(reservations[i] == NULL) {
            for(int y = original_size; y >= 0; --y) {
                if(reservations[y] != NULL) {
                    reservations[i] = reservations[y];
                    reservations[y] = NULL;
                }
            }
        }
    }
 }

 void Library::printReservations() {
     for (int i=0; i<reservation_size; ++i) {
        reservations[i]->print();
    }
 }