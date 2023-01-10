#include "Part.h"

Part::Part(string name) {
    this->name = name;
}

Part::~Part(){
    
}

string Part::getName() {
    return name;
}

int Part::getFlighthours(){
    return flighthours;
}

Date& Part::getInstallationDate() {
    return installationDate;
}

void Part::install(Date& installationDate) {
    this->installationDate = installationDate;
}

void Part::addFlightHours(int flighthours) {
    this->flighthours = flighthours;
}

FH_Part::FH_Part(string name, int n):Part(name) {
    fh_inspect = n;
}

bool FH_Part::inspection(Date& d) {
    if(getFlighthours() >= fh_inspect) {
        return true;
    }
    else {
        return false;
    }
}

IT_Part::IT_Part(string name, int n):Part(name) {
    it_inspect = n;
}

bool IT_Part::inspection(Date& d) {
    if(abs(getInstallationDate().toDays() - d.toDays()) >= it_inspect) {
        return true;
    }
    else {
        return false;
    }
}

FHIT_Part::FHIT_Part(string name, int n1, int n2):FH_Part(name,n1), IT_Part(name, n2), Part(name){

}

bool FHIT_Part::inspection(Date& d) {
    if(FH_Part::inspection(d) || IT_Part::inspection(d)) {
        return true;
    }
    else {
        return false;
    }
}