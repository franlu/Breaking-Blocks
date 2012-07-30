# Definitions
CXX = g++ 
CFLAGS = -Wall -g # Warnings all & DDD
SRC = src
INCLUDE = include
BIN = bin
OBJ = obj
#LIB = lib
RM = rm

# Rules
all: bb_vector bb_lista clean
bb_vector: $(SRC)/breaking_blocks.cpp $(SRC)/tablero_vector.cpp $(SRC)/juego.cpp
	$(CXX) $(CFLAGS) -D __VECTOR_ -c $(SRC)/breaking_blocks.cpp 
	$(CXX) $(CFLAGS) -D __VECTOR_ -c $(SRC)/tablero_vector.cpp 
	$(CXX) $(CFLAGS) -D __VECTOR_ -c $(SRC)/juego.cpp 
	$(CXX) -o $(BIN)/bb_vector $(OBJ)/breaking_blocks.o $(OBJ)/tablero_vector.o $(OBJ)/juego.o 
bb_lista: $(SRC)/breaking_blocks.cpp $(SRC)/tablero_lista.cpp $(SRC)/juego.cpp
	$(CXX) $(CFLAGS) -D __LIST_ -c $(SRC)/breaking_blocks.cpp 
	$(CXX) $(CFLAGS) -D __LIST_ -c $(SRC)/tablero_lista.cpp 
	$(CXX) $(CFLAGS) -D __LIST_ -c $(SRC)/juego.cpp 
	$(CXX) -o $(BIN)/bb_lista $(OBJ)/breaking_blocks.o $(OBJ)/tablero_lista.o $(OBJ)/juego.o  
clean:
	$(RM) $(OBJ)/*.o
