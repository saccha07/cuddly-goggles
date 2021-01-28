CC = g++
CFLAGS  = -g -Wall

# typing 'make' will invoke the first target entry in the file 
# (in this case the default target entry)
# you can name this target entry anything, but "default" or "all"
# are the most commonly used names by convention
#

# To create the executable file count we need the object files
# countwords.o, counter.o, and scanner.o:
#
DuckBinary: FlywithWings.cpp FlyNoWay.cpp FlyRocket.cpp Quack.cpp Squeak.cpp Duck.cpp MallardDuck.cpp ModelDuck.cpp main.cpp 
	$(CC) -o DuckBinary FlywithWings.cpp FlyNoWay.cpp FlyRocket.cpp Quack.cpp Squeak.cpp Duck.cpp MallardDuck.cpp ModelDuck.cpp main.cpp
 
clean: 
	$(RM) DuckBinary
