# CS121_Project5

## UML Diagram

```
classDiagram
    Race --> Horse
    class Horse{
        - TRACK_LENGTH: int
        - number: int
        - position: int
        + Horse()
        + init(int horseNum, int position)
        + void advance()
        + void printlane()
        + bool checkWin():
    }
    class Race{
        - NUM_HORSES: int
        - Horse horses[]: int array
        + Race()
        + void start()
    }
```

## Horse::horse()
```
position = 0
number = 0
```

## Horse::init(int index, int trackPosition)
```
number = index
position = trackPosition
```

## Horse::advance()
```
create random int (0,1)
initialize coin = random value
position = position + coin
```

## Horse::printLane()
```
print position number of "."
print number
print TRACK_LENGTH - (position + 1) number of "."
```

## Horse::checkWin()
```
if position = 14:
        print "Horse number {number} wins!!!"}
        return TRUE
    else:
        return FALSE
```

## Race::race()
```
in header
    initialze NUM_HORSES = 5 as constant
in constructor
    Horse horses[NUM_HORSES]
    for each horse in horses[]:
        initialize with init(int index, int position)
```

## Race::start():
```
initialize integer keepGoing = 0
while keepGoing = 0:
    initialize bool win = FALSE
    for horse in horses[]:
    advance horse
    print horses lane
    if checkWin for horse = TRUE:
        win = TRUE
    
    if win = TRUE:
        keepGoing = 1
    else:
        print "press enter to continue"
        take user input
```
                
        
    

