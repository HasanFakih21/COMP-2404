#include "StackArrays.h"

StackArrays::StackArrays() {
    for(int i = 0; i<ARR_SIZE; i++) {
        episodesp[i] = new Episode;
    }
}

StackArrays::~StackArrays() {
    for(int i = 0; i<ARR_SIZE; i++) {
        delete episodesp[i];
    }
}

Episode* StackArrays::getObjectArray() {
    return episodes;
}

Episode** StackArrays::getPointerArray() {
    return episodesp;
}