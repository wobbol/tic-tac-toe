all: mofunny

debug:
	
	g++ -o mofunny main.cpp winner.cpp grid.cpp game.cpp player.cpp menu.cpp -ggdb

mofunny: main.o winner.o grid.o game.o player.o menu.o
	g++ main.o winner.o grid.o game.o player.o menu.o -o mofunny

main.o: main.cpp
	g++ -c main.cpp
winner.o: winner.cpp
	g++ -c winner.cpp
grid.o: grid.cpp
	g++ -c grid.cpp
game.o: game.cpp
	g++ -c game.cpp
player.o: player.cpp
	g++ -c player.cpp
menu.o: menu.cpp
	g++ -c menu.cpp
