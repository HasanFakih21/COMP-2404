#include "WHLocation.h"

int WHLocation::increment = 0;


WHLocation::WHLocation():Location(code,nextId + increment) {
    increment++;
}

int WHLocation::getCapacity() {
    return capacity;
}

bool WHLocation::add(string product, int quantity) {
    if(isAvailable() && (getCapacity() >= quantity)) {
        getProduct() = product;
        setQuantity(quantity);
        return true;
    }
    else {
        return false;
    }
}

bool WHLocation::remove(int amount) {
    if(getQuantity() < amount) {
        return false;
    }
    else {
        setQuantity(getQuantity() - amount);
        if(getQuantity() == 0) {
            getProduct() = NONE;
        }
        return true;
    }
}