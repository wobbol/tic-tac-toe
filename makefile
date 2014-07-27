all: mofunny

debug:
	
	g++ -o mofunny main.cpp winner.cpp grid.cpp game.cpp -ggdb

mofunny: main.o winner.o grid.o game.o
	g++ main.o winner.o grid.o game.o -o mofunny

main.o: main.cpp
	g++ -c main.cpp
winner.o: winner.cpp
	g++ -c winner.cpp
grid.o: grid.cpp
	g++ -c grid.cpp
game.o: game.cpp
	g++ -c game.cpp

