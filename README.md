# CS121_Project5

## UML Diagram

```
classDiagram
    Race --> Horse
    class Horse{
        - TRACK_LENGTH: int
        - horseNum: int
        - horsePosition: int
        + Horse()
        + Horse(int horseNum, int horsePosition)
        + sethorseNum(int horseNum)
        + getHorseNum(): int
        + sethorsePosition(int horsePosition)
        + getHorsePosition(): int
        + void advance()
        + void printlane()
        + bool checkWin():
    }
    
    class Race{
        - NUM_HORSES: int
        - Horse horses[]: int array
        + Race()
        + setHorses(horseNum)
        + getHorses(): array
        + void start()
        + void turn()
    }
```

## Various Algorithms
```
In class Horse-->

void advance:
    create random in (0,1)
    initialize coin with random value
    if coin == 1:
    setHorsePos(getHorsePosition()+1)


void printLane:
    print getHorsePosition() number of "."
    print getHorseNum()
    print TRACK_LENGTH - ( getHorseNum() + 1) number of "."

bool checkWin():
    if getHorsePosition() = 14:
        print "Horse number {getHorseNum()} wins!!!"}
        return TRUE
    else:
        return FALSE


in class Race-->

void start():
    initialize integer keepGoing = 0
    while keepGoing = 0:
        Race::race.turn()
        take user input

void turn():
    for horse in getHorse():
        Horse::horse.advance()
        Horse::horse.printLane()
        Horse::horse.checkWin()
```     
        
    

