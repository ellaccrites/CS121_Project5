// race.cpp

#include <iostream>
#include "race.h"
#include "horse.h"

Race::Race(){
	for(int i = 0; i < NUM_HORSES; i++){
		horses[i].init(i, 0);
	}// end for
	//Race::testHorse = Horse();
}// end constructor

void Race::start(){
	int keepGoing = 1;
	int win = 0;
	while(keepGoing == 1){
		for(int i = 0; i < NUM_HORSES; i++){
			horses[i].advance();
			horses[i].printLane();
			if(horses[i].checkWin() == true){
				win = 1;
			}// end if
		}//end for

		if(win == 1){
			keepGoing = 0;
		}else{
			std::string next = "\n";
			std::cout << "Press enter to continue ";
			getline(std::cin, next);
			std::cout << std::endl;
		}//end if else
	}// end while
}// end constructor

