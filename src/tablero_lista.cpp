#include "../include/tablero.h"

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
    list<char> aux(_tam.second);
    list<char>::const_iterator it;
    unsigned int i;
    for ( it=bloques.begin(),i=0; it != bloques.end(); it++,i++)
        aux.push_back(*it);
        if ((i % _tam.second) == 0){
            _matriz.push_back(aux);
            aux.clear(); 
        }
}

tablero::tablero(const string& archivo){


}

char tablero::preguntar_posicion(const pair<unsigned int,unsigned int>& par) const {

    char t = " ";
    return t;

}

int tablero::eliminar_posicion(const pair<unsigned int,unsigned int>& par){

    int i = 0;
        return i;

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
