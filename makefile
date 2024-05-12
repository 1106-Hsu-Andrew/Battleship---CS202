battleship: board.o coordinate.o player.o ship.o ai.o game.o helpers.o main.o
	g++ -o battleship board.o coordinate.o player.o ai.o ship.o game.o helpers.o main.o

board.o: board.h ship.h board.cpp
	g++ -c board.cpp

coordinate.o: coordinate.h coordinate.cpp
	g++ -c coordinate.cpp

player.o: player.h board.h player.cpp
	g++ -c player.cpp

ship.o: ship.h coordinate.h ship.cpp
	g++ -c ship.cpp

ai.o: ai.h player.h ai.cpp
	g++ -c ai.cpp

game.o: game.h player.h game.cpp
	g++ -c game.cpp

helpers.o: helpers.h player.h helpers.cpp
	g++ -c helpers.cpp

main.o: main.cpp helpers.h ai.h
	g++ -c main.cpp

clean:
	rm *.o battleship