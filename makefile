all:
	g++ -o mofunny main.cpp winner.cpp grid.cpp
debug:
	
	g++ -o mofunny main.cpp winner.cpp grid.cpp -ggdb
