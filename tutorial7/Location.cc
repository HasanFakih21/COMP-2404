#include "Location.h"

Location::Location(char a, int b) {
    id = a + to_string(b);
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

