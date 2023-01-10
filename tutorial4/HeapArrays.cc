#include "HeapArrays.h"

HeapArrays::HeapArrays() {
  for(int i = 0; i<ARR_SIZE; i++) {
        episodes[i] = Episode();
        episodesp[i] = new Episode;
    }  
}

HeapArrays::~HeapArrays() {
    for(int i = 0; i<ARR_SIZE; i++) {
        delete episodesp[i];
    } 
    delete [] episodesp;
    delete [] episodes;
}

Episode* HeapArrays::getObjectArray() {
    return episodes;
}

Episode** HeapArrays::getPointerArray() {
    return episodesp;
}