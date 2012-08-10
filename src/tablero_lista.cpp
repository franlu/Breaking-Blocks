#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

#include "../include/tablero.h"

tablero::tablero(const pair<unsigned int,unsigned int>& par){

    _tam = par;
    list<char> aux(_tam.second);
    for (unsigned int i = 0 ; i < _tam.first; i++ ){
        for (unsigned int j = 0 ; j < _tam.second; j++ )
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
    
    string palabra, str_local;
    ifstream fich(archivo.c_str());
    list<string> aux;
    while (fich >> palabra) {
        aux.push_back(palabra);
    }
    
    fich.close();
    
    list<string>::const_iterator itr,itr2,itr3;
    itr = aux.begin();
    itr2 = ++itr;  
    pair<unsigned int,unsigned int> par(atoi((*itr).c_str()),atoi((*itr2).c_str()));
    _tam = par;
    
    string::iterator it;
    list<char> lc;
    for(itr3 = ++itr; itr3 != aux.end(); ++itr3){
        str_local = *itr3;
        for (it = str_local.begin(); it != str_local.end(); it++ )
            lc.push_back(*it);
        _matriz.push_back(lc);
        lc.clear();
    }

}

char tablero::preguntar_posicion(const pair<unsigned int,unsigned int>& par) const {

    char t;
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

pair<unsigned int,unsigned int> par;
pair<unsigned int,unsigned int> tam = t.size();

for (unsigned int i=0; i< tam.first; i++){
    os << endl << "\t";
    for (unsigned int j=0; j< tam.second; j++){
        par.first = i;
        par.second = j;
        os << t.preguntar_posicion(par);
    }
}    
return os;
}
