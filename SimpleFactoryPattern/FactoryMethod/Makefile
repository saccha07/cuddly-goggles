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
FactoryMethod: PizzaStore.cpp NYStylePizzaStore.cpp NYCheesePizza.cpp CGStylePizzaStore.cpp CGCheesePizza.cpp Main.cpp
	$(CC) -o FactoryMethod PizzaStore.cpp NYStylePizzaStore.cpp NYCheesePizza.cpp CGStylePizzaStore.cpp CGCheesePizza.cpp Main.cpp

clean:
	$(RM) FactoryMethod
