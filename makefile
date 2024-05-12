battleship: board.o coordinate.o player.o ship.o ai.o game.o helpers.o main.o
	g++ -o battleship board.o coordinate.o player.o ai.o ship.o game.o helpers.o main.o -g

board.o: board.h ship.h board.cpp
	g++ -c board.cpp -g

coordinate.o: coordinate.h coordinate.cpp
	g++ -c coordinate.cpp -g

player.o: player.h board.h player.cpp
	g++ -c player.cpp -g

ship.o: ship.h coordinate.h ship.cpp
	g++ -c ship.cpp -g

ai.o: ai.h player.h ai.cpp
	g++ -c ai.cpp -g

game.o: game.h player.h game.cpp
	g++ -c game.cpp -g

helpers.o: helpers.h player.h helpers.cpp
	g++ -c helpers.cpp -g

main.o: main.cpp helpers.h ai.h
	g++ -c main.cpp -g

clean:
	rm *.o battleship