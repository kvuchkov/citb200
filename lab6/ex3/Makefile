CC=g++
CFLAGS=-c --std=c++11

all: calculate

calculate: main.o calc.o
	$(CC) main.o calc.o -o calculate

main.o: src/main.cpp
	$(CC) $(CFLAGS) src/main.cpp

calc.o: src/calc.h src/calc.cpp
	$(CC) $(CFLAGS) src/calc.cpp

clean:
	rm *.o calculate

rebuild: clean all