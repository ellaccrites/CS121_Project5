// horseRace.cpp

#include <iostream>
#include "horse.h"
#include "race.h"

void testHorse();
void startRace();

int main(){
	std::cout << "Test the OOP Horse Race!!!" << std::endl;
	startRace();
	return 0;
}//end main

void testHorse(){
	Horse first;
	first.init(0, 0);
	first.printLane();
	first.advance();
	first.printLane();
}//end testHorse

void startRace(){
	Race game;
	game.start();
}// end startRace

