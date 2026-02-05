// race.h

#ifndef RACE_R_EXISTS
#define RACE_R_EXISTS

#include "horse.h"

const static int NUM_HORSES = 5;

class Race {
	private:
		Horse horses[NUM_HORSES];
		Horse testHorse;
	public:
		Race();
		void start();
};

#endif
