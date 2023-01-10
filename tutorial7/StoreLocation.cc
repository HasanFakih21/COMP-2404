#include "StoreLocation.h"

StoreLocation::StoreLocation():Location(code,nextId + increment) {
    increment++;
}