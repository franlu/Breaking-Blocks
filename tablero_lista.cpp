#include "tablero.h"

tablero::tablero(const pair<unsigned int,unsigned int>& par){

	this._tam.first = par.first;
	this._tam.first = par.second;

}

tablero::tablero(const pair<unsigned int,unsigned int>& par, const list<char>& bloques){

	this._tam.first = par.first;
	this._tam.first = par.second;
	this._matriz = bloques;

}

tablero::preguntar_posicion(const pair<unsigned int,unsigned int>& par) const {




}

tablero::eliminar_posicion(const pair<unsigned int,unsigned int>& par){




}

pair<unsigned int,unsigned int> tablero::size() const {

	return this._tam;

}

//implementar
ostream& operator<< (ostream& os, const tablero& t){

	for (int i=0; i<t.fil(); i++){
		os << endl;
		for (int j=0; j<t.col(); j++)
			os << t(i,j) << ' ';
	}

return os;

}
