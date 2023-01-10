
#include "Date.h"

Date::Date(){
	setDate(1,1,1901,0,1);
}

Date::Date(int y, int m, int d, int h, int dr){
	setDate(y,m,d,h,dr);
}


//setters
void Date::setDay(int d){
	int max = getMaxDay();
	if (d>max) d=max;
	if (d<1) d=1;
	day = d;
}

void Date::setMonth(int m){
	if (m > 12) m = 12;
	if (m < 1) m = 1;
	month = m;
}

void Date::setYear(int y){
	if (y < 1901) y = 1901;
	year = y;
}

void Date::setHour(int h) {
	if (h > 23) h = 23;
	if (h < 0) h = 0;
	hour = h;
}

void Date::setDuration(int dr) {
	if (dr > MAX_DURATION) dr = MAX_DURATION;
	if (dr < 1) dr = 1;
	duration = dr;
}

void Date::setDate(int y, int m, int d, int h, int dr){
	setMonth(m);
	setDay(d);
	setYear(y);
	setHour(h);
	setDuration(dr);
}

void Date::setDate(Date& d){
	setDate(d.day, d.month, d.year, d.hour, d.duration);
}


//getters
int Date::getDay(){ return day; }
int Date::getMonth(){ return month; }
int Date::getYear(){ return year; }
int Date::getHour() { return hour; }
int Date::getDuration() { return duration; }
const string& Date::getMonthName(){return months[month-1];}


//other

bool Date::lessThan(Date& d){
	if (year == d.year){
		if (month == d.month){
			if(day == d.day) {
				return hour<d.hour;
			}
			else {
				return day < d.day;
			}
		}else{
			return month  < d.month;
		}
	}else{
		return year < d.year;
	}	
}

bool Date::overlaps(Date& d) {
	if(year == d.year) {
		if(month == d.month) {
			if(day == d.day) {
				if(hour == d.hour) {
					return true;
				}
				if(this->lessThan(d)) {
					for(int i = 0; i <= duration; i++) {
						if( ((hour + i) > d.hour) && (hour + i) < d.hour + d.duration) {
							return true;
						}
					}
				}
				else {
					for(int i = 0; i <= d.duration; i++) {
						if( ((d.hour + i) > hour) && (d.hour + i) < hour + duration) {
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

void Date::print(){
	cout << getMonthName()<<" "<<getDay()<<", "<<getYear()<<", "<<getHour()<<", "<<getDuration()<<endl;
}

int Date::getMaxDay(){
	switch(getMonth()){
		case 4:
		case 6:
		case 9:
		case 11: 			return 30;
		case 2:				return 28;
		default:			return 31;
	}
}

