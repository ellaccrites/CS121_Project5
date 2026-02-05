// horseRace.cpp

#include <iostream>
#include "horse.h"

void testHorse();

int main(){
	std::cout << "Test the OOP Horse Race!!!" << std::endl;
	testHorse();
	return 0;
}//end main

void testHorse(){
	Horse first;
	first.init(0, 0);
	first.printLane();
	first.advance();
	first.printLane();
	first.advance();
	first.printLane();
}//end testHorse


