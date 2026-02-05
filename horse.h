// horse.h

#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class Horse {
	private:
		int position = 0;
		int number = 0;
	public:
		Horse();
		void init(int index, int trackPosition);
		void advance();
		void printLane();
		bool checkWin();
};

#endif
