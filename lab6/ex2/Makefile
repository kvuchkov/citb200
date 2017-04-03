all: calculate

calculate: main.o calc.o
	g++ main.o calc.o -o calculate

main.o: src/main.cpp
	g++ -c src/main.cpp

calc.o: src/calc.h src/calc.cpp
	g++ -c src/calc.cpp

clean:
	rm *.o calculate

rebuild: clean all