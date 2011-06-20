#include "tablero.h"

tablero::tablero(const pair<unsigned int,unsigned int>& par){

	_tam = par;
	vector<char> aux(par.second,'X');
	for (int i=0; i < par.first; i++)
		_matriz.push_back(aux);
}

tablero::tablero(const pair<unsigned int,unsigned int>& par, const list<char>& bloques){

	_tam = par;
	
	int i=0;
	list<char>::const_iterator it;
	vector<char> aux(_tam.second);
	
	for ( it = bloques.begin(); it != bloques.end(); it++){
		if (i<_tam.second)
			aux[i] = *it;
		else{
			_matriz.push_back(aux);
			aux.clear();
			i=0;
			aux[i] = *it;
		}
		i++;
	}	
	
}

char tablero::preguntar_posicion(const pair<unsigned int,unsigned int>& par) const {

	return _matriz[par.first][par.second];
}

int tablero::eliminar_posicion(const pair<unsigned int,unsigned int>& par){




}

pair<unsigned int,unsigned int> tablero::size() const {

	return _tam;

}


ostream& operator<< (ostream& os, const tablero& t){

pair<unsigned int,unsigned int> par;
pair<unsigned int,unsigned int> tam = t.size();

	 for (int i=0; i<tam.first-1; i++){
		os << endl;
		for (int j=0; j<tam.second; j++){
			par.first = i;
			par.second = j;
			os << t.preguntar_posicion(par) << ' ';
		}
		
	}

return os;

}
