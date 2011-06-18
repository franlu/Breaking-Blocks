#include "tablero.h"

tablero::tablero(const pair<unsigned int,unsigned int>& par){

	_tam = par;
	for (int i=0; i< _tam.first;i++)
		for (int j=0; j< _tam.second;j++)
		 _matriz[i][j] = '_';

}
/**
      @brief Construye un tablero a partir de una lista
      @param par tamaño del tablero
      @param bloques lista de caracteres conteniendo toda la informacion del tablero.
      Constructor de la clase que recibe el tama~no del tablero dado por un par (x,y)
      y una lista de caracteres que corresponden a los bloques del tablero dado por filas.
    */
tablero::tablero(const pair<unsigned int,unsigned int>& par, const list<char>& bloques){

	_tam = par;
	for (int i=0; i< _tam.first;i++)
		for (int j=0; j< _tam.second;j++)
			_matriz[i][j] = bloques[((3*i)+j)];

}

char tablero::preguntar_posicion(const pair<unsigned int,unsigned int>& par) const {




}

int tablero::eliminar_posicion(const pair<unsigned int,unsigned int>& par){




}

pair<unsigned int,unsigned int> tablero::size() const {

	return _tam;

}

//implementar
ostream& operator<< (ostream& os, const tablero& t){

	/*for (int i=0; i<t.fil(); i++){
		os << endl;
		for (int j=0; j<t.col(); j++)
			os << t(i,j) << ' ';
	}*/

return os;

}
