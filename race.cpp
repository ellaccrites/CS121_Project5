// race.cpp

#include <iostream>
#include "race.h"
#include "horse.h"

Race::Race(){
	Race::winner = 9;
	for(int i = 0; i < NUM_HORSES; i++){
		horses[i].init(i, 0);
	}// end for
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
				Race::winner = i;
			}// end if
		}//end for

		if(win == 1){
			keepGoing = 0;
		}else{
			std::cin.clear(); 
			std::string next = "\n";
			std::cout << "Press enter to continue ";
			getline(std::cin, next);
			std::cout << std::endl;
		}//end if else
	}// end while
}// end constructor

int Race::getWinner(){
	return Race::winner;
}// end constructor

