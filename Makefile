# Definitions
CXX = g++ 
CFLAGS = -Wall -g # Warnings all & DDD
SRC = src
INCLUDE = include
BIN = bin
OBJ = obj
#LIB = lib
TDD = test
RM = rm -r
CP = cp

# Rules
all: tab_vector bb_vector bb_lista clean
tab_vector:
	$(CXX) $(CFLAGS) -D __VECTOR_ -c $(SRC)/tablero_vector.cpp
	$(CXX) $(CFLAGS) -D __VECTOR_ -c $(TDD)/tab_vector.cpp
	$(CP) *.o $(OBJ)
	$(RM) *.o
	$(CXX) -o $(BIN)/tab_vector $(OBJ)/tablero_vector.o $(OBJ)/tab_vector.o
bb_vector: 
	$(CXX) $(CFLAGS) -D __VECTOR_ -c $(SRC)/breaking_blocks.cpp 
	$(CXX) $(CFLAGS) -D __VECTOR_ -c $(SRC)/tablero_vector.cpp 
	$(CXX) $(CFLAGS) -D __VECTOR_ -c $(SRC)/juego.cpp 
	$(CXX) -o $(BIN)/bb_vector $(OBJ)/breaking_blocks.o $(OBJ)/tablero_vector.o $(OBJ)/juego.o 
bb_lista: 
	$(CXX) $(CFLAGS) -D __LIST_ -c $(SRC)/breaking_blocks.cpp 
	$(CXX) $(CFLAGS) -D __LIST_ -c $(SRC)/tablero_lista.cpp 
	$(CXX) $(CFLAGS) -D __LIST_ -c $(SRC)/juego.cpp 
	$(CXX) -o $(BIN)/bb_lista $(OBJ)/breaking_blocks.o $(OBJ)/tablero_lista.o $(OBJ)/juego.o  
clean:
	$(RM) $(OBJ)/*.o
