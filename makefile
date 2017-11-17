
all: main

main: main.o SortType.o 
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -o main main.o SortType.o 

main.o: main.cpp SortType.h 
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c main.cpp

SortType.o: SortType.cpp SortType.h
	g++ -Wall -std=c++14 -g -O0 -pedantic-errors -c SortType.cpp
 
clean:
	rm -rf main
	rm -rf *.o