# Simple Makefile
CXX = g++ 
CFLAGS = -Wall -g
OBJ = /obj/
all: bb_vector bb_lista
bb_vector: breaking_blocks.cpp tablero_vector.cpp juego.cpp
	$(CXX) $(CFLAGS) -D __VECTOR_ -c breaking_blocks.cpp 
	$(CXX) $(CFLAGS) -D __VECTOR_ -c tablero_vector.cpp 
	$(CXX) $(CFLAGS) -D __VECTOR_ -c juego.cpp 
	$(CXX) -o bb_vector breaking_blocks.o tablero_vector.o juego.o 
bb_lista: breaking_blocks.cpp tablero_lista.cpp juego.cpp
	$(CXX) $(CFLAGS) -D __LIST_ -c breaking_blocks.cpp 
	$(CXX) $(CFLAGS) -D __LIST_ -c tablero_lista.cpp 
	$(CXX) $(CFLAGS) -D __LIST_ -c juego.cpp 
	$(CXX) -o bb_lista breaking_blocks.o tablero_lista.o juego.o  
clean:
	$(RM) *.o bb_vector bb_lista
