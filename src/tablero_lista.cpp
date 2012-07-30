#include "tablero.h"

tablero::tablero(const pair<unsigned int,unsigned int>& par){

	_tam = par;
	list<char> aux(_tam.second);
	for (int i = 0 ; i < _tam.first; i++ ){
		for (int j = 0 ; j < _tam.second; j++ )
			aux.push_back('X');
		_matriz.push_back(aux);
	}

}

tablero::tablero(const pair<unsigned int,unsigned int>& par, const list<char>& bloques){

	_tam = par;
	list<char>::iterator it;
	for ( it=bloques.begin() ; it != bloques.end(); it++)
																																	

}

tablero::preguntar_posicion(const pair<unsigned int,unsigned int>& par) const {




}

int tablero::eliminar_posicion(const pair<unsigned int,unsigned int>& par){




}

pair<unsigned int,unsigned int> tablero::size() const {

	return _tam;

}


ostream& operator<< (ostream& os, const tablero& t){

/*	for (int i=0; i<t.fil(); i++){
		os << endl;
		for (int j=0; j<t.col(); j++)
			os << t(i,j) << ' ';
	}
*/
return os;

}
