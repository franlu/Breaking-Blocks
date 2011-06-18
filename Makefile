# Simple Makefile
CXX = g++ 
CFLAGS = -Wall -g
all: juegovector juegolista
vector: breaking_blocks.cpp tablero_vector.cpp juego.cpp
	$(CXX) $(CFLAGS) -D __VECTOR_ -c breaking_blocks.cpp 
	$(CXX) $(CFLAGS) -D __VECTOR_ -c tablero_vector.cpp 
	$(CXX) $(CFLAGS) -D __VECTOR_ -c juego.cpp 
	$(CXX) -o juegovector breaking_blocks.o tablero_vector.o juego.o 
lista: breaking_blocks.cpp tablero_lista.cpp juego.cpp
	$(CXX) $(CFLAGS) -D __LIST_ -c breaking_blocks.cpp 
	$(CXX) $(CFLAGS) -D __LIST_ -c tablero_lista.cpp 
	$(CXX) $(CFLAGS) -D __LIST_ -c juego.cpp 
	$(CXX) -o juegolista breaking_blocks.o tablero_lista.o juego.o  
clean:
	$(RM) *.o juegovector juegolista
