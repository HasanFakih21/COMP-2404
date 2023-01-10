#ifndef STACKARRAYS_H
#define STACKARRAYS_H

#include <iostream>
#include <string>
#include "defs.h"
#include "Episode.h"

using namespace std;

class StackArrays {
	public:
		StackArrays();
		~StackArrays();
		Episode* getObjectArray();
		Episode** getPointerArray();
	
	private:
		Episode episodes[ARR_SIZE];
		Episode* episodesp[ARR_SIZE];
		
};
#endif