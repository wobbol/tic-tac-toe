all: mofunny

debug:
	
	g++ -o mofunny main.cpp winner.cpp grid.cpp game.cpp player.cpp menu.cpp -ggdb

mofunny: main.o winner.o grid.o game.o player.o menu.o
	g++ ../obj/main.o ../obj/winner.o ../obj/grid.o ../obj/game.o ../obj/player.o ../obj/menu.o -o mofunny

main.o: main.cpp
	g++ -c main.cpp -o ../obj/main.o
winner.o: winner.cpp 
	g++ -c winner.cpp -o ../obj/winner.o
grid.o: grid.cpp 
	g++ -c grid.cpp -o ../obj/grid.o
game.o: game.cpp 
	g++ -c game.cpp -o ../obj/game.o
player.o: player.cpp 
	g++ -c player.cpp -o ../obj/player.o
menu.o: menu.cpp 
	g++ -c menu.cpp -o ../obj/menu.o
clean:
	rm -R ../obj/*.o
