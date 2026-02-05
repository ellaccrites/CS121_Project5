horseRace: main.o horse.o race.o
	g++ -g main.o horse.o race.o -o horseRace

main.o: main.cpp horse.h race.h
	g++ -g -c main.cpp

horse.o: horse.h horse.cpp
	g++ -g -c horse.cpp

race.o: race.cpp race.h horse.h
	g++ -g -c race.cpp

clean:
	rm horseRace main.o horse.o race.o

run:
	./horseRace

debug: horseRace
	gdb horseRace
