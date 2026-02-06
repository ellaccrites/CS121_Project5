// horseRace.cpp

#include <iostream>
#include "horse.h"
#include "race.h"

int betting();

int main(){
	int bet = 10;
	std::cout << "Horse race!! Yay!! Let's go!" << std::endl;
	bet = betting();

	Race game;
	game.start();
	if(bet == game.getWinner()){
                std::cout << "Congratulations!  Your horse won!" << std::endl;
        }else{
		std::cout << "Awww your horse didn't win :( " << std::endl;
		std::cout << "Try again next time!" << std::endl;
	}// end if else
	std::cout << std::endl;
	return 0;
}//end main

int betting(){
        int bet = 10;
	std::cout << "Which horse are you betting on? Pick a horse 0 through 4: ";
        std::cin >> bet;
        std::cout << std::endl;
        std::cin.clear();
	return bet;
}// end betting
