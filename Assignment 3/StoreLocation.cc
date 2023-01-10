#include "StoreLocation.h"

int StoreLocation::increment = 0;

StoreLocation::StoreLocation():Location(code,nextId + increment) {
    increment++;
}

void StoreLocation::setProduct(string product) {
    getProduct() = product;
}

int StoreLocation::getFreeSpace() {
    return getCapacity() - getQuantity();
}

int StoreLocation::getCapacity() {
    return capacity;
}

bool StoreLocation::add(string product, int quantity) {
    if(getProduct().compare(NONE) == 0) {
        if(getFreeSpace() >= quantity) {
            setProduct(product);
            setQuantity(quantity);
            return true;
        }
    }
    else if(getProduct().compare(product) == 0) {
        if(getFreeSpace() >= quantity) {
            setQuantity(getQuantity() + quantity);
            return true;
        }
    }
    else {
        return false;
    }
}

bool StoreLocation::remove(int amount) {
    if(getQuantity() < amount) {
        return false;
    }
    else {
        setQuantity(getQuantity() - amount);
        return true;
    }
}
