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
AbstractFactoryBinary: PizzaStore.cpp NYStylePizzaStore.cpp CGStylePizzaStore.cpp CGPizzaIngredientFactory.cpp NYPizzaIngredientFactory.cpp CheesePizza.cpp ClamPizza.cpp VeggiePizza.cpp ThinCrustDough.cpp ThickCrustDough.cpp MarinaSauce.cpp PlumTomatoSauce.cpp MozzCheese.cpp RegginCheese.cpp Main.cpp
	$(CC) -o AbstractFactoryBinary PizzaStore.cpp NYStylePizzaStore.cpp CGStylePizzaStore.cpp CGPizzaIngredientFactory.cpp NYPizzaIngredientFactory.cpp CheesePizza.cpp ClamPizza.cpp VeggiePizza.cpp ThinCrustDough.cpp ThickCrustDough.cpp MarinaSauce.cpp PlumTomatoSauce.cpp MozzCheese.cpp RegginCheese.cpp Main.cpp

clean:
	$(RM) AbstractFactoryBinary
