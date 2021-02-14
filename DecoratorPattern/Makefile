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
DecoratorPatternBinary: Espresso.cpp HouseBlend.cpp Mocha.cpp Milk.cpp DarkRoast.cpp Soy.cpp Main.cpp
	$(CC) -o DecoratorPatternBinary Espresso.cpp HouseBlend.cpp Mocha.cpp Milk.cpp DarkRoast.cpp Soy.cpp Main.cpp

clean:
	$(RM) DecoratorPatternBinary
