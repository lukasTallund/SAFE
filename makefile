CCC = g++
CCFLAGS = -g -std=c++11 -pedantic -Wall -Wextra
LDFLAGS = -L/sw/gcc-4.7.1/lib -static-libstdc++

game: game.o GameArea.o
	$(CCC) $(CCFLAGS) $(LDFLAGS) GameArea.o game.o -o  game

game.o: game.cc
	$(CCC) $(CCFLAGS) -c game.cc

GameArea.o: GameArea.cc
	$(CCC) $(CCFLAGS) -c GameArea.cc


# Städa arbetsmappen
clean:
	@ \rm -f *.o
