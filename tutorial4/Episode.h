#ifndef EPISODE_H
#define EPISODE_H

#include <iostream>
#include <string>

using namespace std;

class Episode {
	public:
		Episode(const string& podcast, int number, const string& name, const string& content);
        Episode();
        void print();
        string getPodcast();
        int getNumber();
        string getName();
        string getContent();
        void setName(string&);
        void setPodcast(string&);
        void setContent(string&);
        void setNumber(int);
	
	private:
		string name;
        string content;
        string podcast;
        int number;
};
#endif