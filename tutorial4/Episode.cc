#include "Episode.h"

Episode::Episode(const string& podcast, int number, const string& name, const string& content) {
    this->podcast = podcast;
    this->number = number;
    this->name = name;
    this->content = content;
}

Episode::Episode() {
    podcast = "Undefined";
    number = 0;
    name = "Episode";
    content = "Undefined";
}

string Episode::getContent() {
    return content;
}

string Episode::getName() {
    return name;
}

string Episode::getPodcast() {
    return podcast;
}

int Episode::getNumber() {
    return number;
}

void Episode::setContent(string& c) {
    content = c;
}

void Episode::setName(string& n) {
    name = n;
}

void Episode::setPodcast(string& p) {
    podcast = p;
}

void Episode::setNumber(int n) {
    number = n;
}

void Episode::print() {
    cout << podcast << " " << name << " " << number << " " << content << endl;
}