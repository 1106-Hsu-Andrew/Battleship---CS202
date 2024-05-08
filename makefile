battleship: board.o coordinate.o player.o ship.o main.o
	g++ -o battleship board.o coordinate.o player.o ship.o

board.o: board.h ship.h board.cpp
	g++ -c board.cpp

coordinate.o: coordinate.h coordinate.cpp
	g++ -c coordinate.cpp

player.o: player.h board.h player.cpp
	g++ -c player.cpp

ship.o: ship.h coordinate.h ship.cpp
	g++ -c ship.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o battleship