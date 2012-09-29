CC=g++
CCFlags=-std=c++0x
LIBDIRS=-L/usr/local/lib
LIBS=-lsfml-system -lsfml-window -lsfml-audio
OBJ=main.o game.o inputhandler.o gamelogic.o point2d.o

finallylord : $(OBJ)
	$(CC) $(CCFLAGS) -o finallylord $(LIBDIRS) $(LIBS) $(OBJ)
main.o : main.cpp
	$(CC) $(CCFLAGS) -c main.cpp
game.o : game.cpp
	$(CC) $(CCFLAGS) -c game.cpp
inputhandler.o : inputhandler.cpp
	$(CC) $(CCFLAGS) -c inputhandler.cpp
gamelogic.o : gamelogic.cpp
	$(CC) $(CCFLAGS) -c gamelogic.cpp
point2d.o : point2d.cpp
	$(CC) $(CCFLAGS) -c point2d.cpp

