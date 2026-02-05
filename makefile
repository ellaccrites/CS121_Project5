horseRace: main.o horse.o
	g++ -g main.o horse.o -o horseRace

main.o: main.cpp horse.h
	g++ -g -c main.cpp

horse.o: horse.h horse.cpp
	g++ -g -c horse.cpp

clean:
	rm horseRace

run:
	./horseRace

debug: horseRace
	gdb horseRace
