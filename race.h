// race.h

#ifndef RACE_R_EXISTS
#define RACE_R_EXISTS

#include "horse.h"

class Race {
	private:
		const static int NUM_HORSES = 15;
		Horse horses[NUM_HORSES];
	public:
		Race();
		void start();
};

#endif
