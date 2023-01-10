#ifndef PART_H
#define PART_H

#include <iostream>
#include <string>
#include <cstdlib>
#include "Date.h"

using namespace std;

class Part {

	public:
        Part(string name);
        virtual ~Part();
        string getName();
        int getFlighthours();
        Date& getInstallationDate();

        void addFlightHours(int);
        void install(Date&);
        virtual bool inspection(Date&) = 0;

	private:
        string name;
        Date installationDate;
        int flighthours;
	
	
};

class FH_Part:virtual public Part {

    public:
        FH_Part(string name, int n);
        virtual bool inspection(Date&);

    private:
        int fh_inspect;

};

class IT_Part:virtual public Part {

    public:
        IT_Part(string name, int n);
        virtual bool inspection(Date&);

    private:
        int it_inspect;
};

class FHIT_Part:public IT_Part, public FH_Part{
    
    public:
        FHIT_Part(string name, int n1, int n2);
        virtual bool inspection(Date&);

    private:
};
#endif
