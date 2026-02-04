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
        + checkWin(): int
    }
    
    class Race{
        - NUM_HORSES: int
        - Horse horse[]: int array
        + Race()
        + void start()
        + void turn()
    }
```
