#include "Student.h"

Student::Student() {
    name = "Undefined";
    number = "000000000";
}

Student::Student(string name, string number) {
	this->name = name;
    this->number = number;
}

Student::Student(Student& copy) {
    this->name = copy.name;
    this->number = copy.number;
}

//setters
void Student::setName(string name){
	this->name = name;
}

void Student::setNumber(string number){
	this->number = number;
}

//getters
string Student::getName(){ return name; }
string Student::getNumber(){ return number; }

//other
bool Student::lessThan(Student& s) {
    if(this->name.compare(s.name) < 0) {
        return true;
    }
    else {
        return false;
    }
}

void Student::print(){
	cout << getName()<<" "<<getNumber()<<endl;
}
