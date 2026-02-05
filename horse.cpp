// horse.cpp

#include <iostream>
#include <random>
#include "horse.h"

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

Horse::Horse(){
	Horse::position = 0;
	Horse::number = 0;
}// end constructor

void Horse::init(int index, int trackPosition){
	Horse::number = index;
	Horse::position = trackPosition;
}// end constructor

void Horse::advance(){
	int coin = dist(rd);
	Horse::position += coin;
}// end constructor

void Horse::printLane(){
	for(int i = 0; i < Horse::position; i++){
		std::cout << ".";
	}// end for
	std::cout << Horse::number;
	for(int i = 0; i < 14 - Horse::position; i++){
		std::cout << ".";
	}//end for
	std::cout << std::endl;
	/*
	for(int i = 0; i < 15; i++){
		std::cout << ".";
		if(i == Horse::position){
			std::cout << Horse::position;
		}// end if
	}//end for
	*/
}//end constructor

bool Horse::checkWin(){
	if(Horse::position == 14){
		std::cout << "Horse number " << Horse::position << " wins!!!" << std::endl;
		return true;
	}else{
		return false;
	}//end if else
}//end constructor

	
