#include "../include/tablero.h"

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

tablero::tablero(const pair<unsigned int,unsigned int>& par){

    _tam = par;
    vector<char> aux(par.second,'X');
    for (unsigned int i=0; i < par.first; i++)
        _matriz.push_back(aux);
}

tablero::tablero(const pair<unsigned int,unsigned int>& par, const list<char>& bloques){

    _tam = par;
    _matriz.reserve(_tam.first);

    vector<char> aux(_tam.second);
    list<char>::const_iterator it = bloques.begin();

    for (unsigned int i=0; i < _tam.first; i++){
        aux.clear();
            for (unsigned int j=0; j < _tam.second; j++){
        aux.push_back(*it);
        it++;
            }
            _matriz.push_back(aux);
    }

}

tablero::tablero(const string& archivo){

    string palabra;
    ifstream fich(archivo.c_str());
    vector<string> aux;
    while (fich >> palabra) {
        aux.push_back(palabra);
    }
    
    fich.close();
    
    for (unsigned int i=0; i < aux.size(); i++)
        cout << aux[i] << endl;
    
    pair<unsigned int,unsigned int> par(atoi(aux[0].c_str()),atoi(aux[1].c_str()));
    _tam = par;
    
    string::iterator it;
    vector<char> vc;
    for(int i=2; i < aux.size(); i++){
        for ( it=aux[i].begin() ; it < aux[i].end(); it++ )
            vc.push_back(*it);
        _matriz.push_back(vc);
        vc.clear();
    }
}

char tablero::preguntar_posicion(const pair<unsigned int,unsigned int>& par) const {
    
    if (_matriz[par.first][par.second] == ' ')
        return '_';
    else
        return _matriz[par.first][par.second];
}

int tablero::eliminar_posicion(const pair<unsigned int,unsigned int>& par){

char aux = _matriz[par.first][par.second];
unsigned int eliminadas = 0;

unsigned int inicioi = par.first - 1;
unsigned int fini = par.first + 2;

unsigned int inicioj = par.second - 1;
unsigned int finj = par.second + 2;


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
        for (unsigned int i = inicioi; i < fini; i++)
            for (unsigned int j= inicioj; j< finj; j++)
                 if ((_matriz.at(i)).at(j) == aux){
                    _matriz[i][j] = '_';
                    eliminadas++;
                 }
        //recolocar bloques libres
        if (eliminadas > 0){
            for (unsigned int i=1; i< _tam.first; i++)
                for (unsigned int j=0; j< _tam.second; j++)
                    if (((_matriz.at(i)).at(j) == '_') and ((_matriz.at(i-1)).at(j) != '_' )){
                        char a = (_matriz.at(i-1)).at(j);
                        _matriz[i][j] = a;
                        _matriz[i-1][j] = '_';
                    }
        }
     
        return eliminadas;
    }
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
