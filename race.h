// race.h

#ifndef RACE_R_EXISTS
#define RACE_R_EXISTS

#include "horse.h"

const static int NUM_HORSES = 5;

class Race {
	private:
		Horse horses[NUM_HORSES];
		int winner = 9;
	public:
		Race();
		void start();
		int getWinner();
};

#endif
