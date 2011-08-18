#include "tablero.h"

tablero::tablero(const pair<unsigned int,unsigned int>& par){

	_tam = par;
	vector<char> aux(par.second,'X');
	for (int i=0; i < par.first; i++)
		_matriz.push_back(aux);
}

tablero::tablero(const pair<unsigned int,unsigned int>& par, const list<char>& bloques){

	_tam = par;
	_matriz.reserve(_tam.first);
	
	vector<char> aux(_tam.second);
	list<char>::const_iterator it = bloques.begin();
	
	for (int i=0; i < _tam.first; i++){
	    aux.clear();
            for (int j=0; j < _tam.second; j++){
		aux.push_back(*it);
		it++;
            }
            _matriz.push_back(aux);
	}

}

char tablero::preguntar_posicion(const pair<unsigned int,unsigned int>& par) const {

	return _matriz[par.first][par.second];
}

int tablero::eliminar_posicion(const pair<unsigned int,unsigned int>& par){

char aux = _matriz[par.first][par.second];
unsigned int eliminadas = 0;

int inicioi = par.first - 1;
int fini = par.first + 2;

int inicioj = par.second - 1;
int finj = par.second + 2;


//Indices dentro del tablero
if (inicioi < 0)
	inicioi = 0;
if (fini > _tam.first)
	fini = _tam.first;

if (inicioj < 0)
	inicioj = 0;
if (finj > _tam.second)
	finj = _tam.second;
	

	if (aux == '_')
		return eliminadas;
	else{
		//recorrer posiciones adyacentes
		for (int i = inicioi; i < fini; i++)
			for (int j= inicioj; j< finj; j++)
				if ((_matriz.at(i)).at(j) == aux){
					_matriz[i][j] = '_';
					eliminadas++;
				}
				
		return eliminadas;
	}
	
	//recolocar filas-columnas libres
	
}

pair<unsigned int,unsigned int> tablero::size() const {

	return _tam;

}

ostream& operator<< (ostream& os, const tablero& t){

pair<unsigned int,unsigned int> par;
pair<unsigned int,unsigned int> tam = t.size();

	 for (int i=0; i< tam.first; i++){
		os << endl << "\t";
		for (int j=0; j< tam.second; j++){
			par.first = i;
			par.second = j;
			os << t.preguntar_posicion(par);
		}
		
	}

return os;

}
