CC=g++
CCFlags=-std=c++0x
LIBDIRS=-L/usr/local/lib
LIBS=-lsfml-system -lsfml-window -lsfml-audio
OBJ=main.o

finallylord : $(OBJ)
	$(CC) $(CCFLAGS) -o finallylord $(LIBDIRS) $(LIBS) $(OBJ)
main.o : main.cpp
	$(CC) $(CCFLAGS) -c main.cpp
