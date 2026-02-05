// race.cpp

#include <iostream>
#include "race.h"
#include "horse.h"

const static int NUM_HORSES = 15;

Race::Race(){
	for(int i = 0; i < NUM_HORSES; i++){
		horses[i] = Horse();
	}// end for
}// end constructor

void Race::start(){
	int keepGoing = 0;
	while(keepGoing == 0){
		for(int i; i < NUM_HORSES; i++){
			horses[i].advance();
			horses[i].printLane();
			bool win = false;
			if(horses[i].checkWin() == true){
				win = true;
			}// end if
			if(win == true){
				keepGoing = 0;
			}else{
				std::string next = "\n";
				std::cout << "Press enter to continue ";
				getline(std::cin, next);
				std::cout << std::endl;
			}//end if else
		}// end for
	}// end while
}// end start
