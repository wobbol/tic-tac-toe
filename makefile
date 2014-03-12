all:
	g++ -o mofunny main.cpp winner.cpp grid.cpp game.cpp
debug:
	
	g++ -o mofunny main.cpp winner.cpp grid.cpp game.cpp -ggdb
