#include "tablero.h"

tablero::tablero(const pair<unsigned int,unsigned int>& par){

	_tam = par;
	
	for (int i = 0 ; i < _tam.first * _tam.second; i++ )


}

tablero::tablero(const pair<unsigned int,unsigned int>& par, const list<char>& bloques){

	_tam = par;
	list<int>::iterator it;
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
