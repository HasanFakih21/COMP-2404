#ifndef HEAPARRAYS_H
#define HEAPARRAYS_H

#include <iostream>
#include <string>
#include "defs.h"
#include "Episode.h"

using namespace std;

class HeapArrays {
	public:
		HeapArrays();
		~HeapArrays();
		Episode* getObjectArray();
		Episode** getPointerArray();
	
	private:
		Episode* episodes = new Episode[ARR_SIZE];
		Episode** episodesp = new Episode*[ARR_SIZE];
		
};
#endif