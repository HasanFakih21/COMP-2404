#include "Location.h"

Location::Location(char a, int b) {
    id = a + to_string(b);
    product = NONE;
}

string Location::getId() {
    return id;
}

string Location::getProduct() {
    return product;
}

int Location::getQuantity() {
    return quantity;
}

void Location::setQuantity(int quantity) {
    this->quantity = quantity;
}

bool Location::isEmpty() {
    if(quantity == 0) {
        return true;
    }
    return false;
}

bool Location::isAvailable() {
    if(product == NONE) {
        return true;
    }
    return false;
}

void Location::print() {
    cout << getId() << " " << getProduct() << " " << getQuantity() << endl;
}

