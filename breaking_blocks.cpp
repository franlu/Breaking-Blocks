#include "breaking_blocks.h"
#include <iostream>
#include <fstream>


breaking_blocks::breaking_blocks(const pair<unsigned int,unsigned int>& par):_tablero(par){
    
    
}

breaking_blocks::breaking_blocks(const string& archivo){
    
    string palabra;
    ifstream fich(archivo);
    pair<unsigned int,unsigned int> par;
    list<char> bloques;
    
    while (fich >> palabra) {
        cout << palabra << endl;
    }

    fich.close();
        
    _tablero(par,bloques);
}

unsigned int breaking_blocks::eliminar_posicion(const pair<unsigned int,unsigned int>& par){
    
    int puntos = _tablero.eliminar_posicion(par);
    
    return puntos * (puntos-1);
    
}

bool breaking_blocks::mas_movimientos() const {
    
    unsigned int aux;
    char c;
    pair<unsigned int,unsigned int> tam = _tablero.size();
    pair<unsigned int,unsigned int> par,par2;
    
    for (int i=0; i< tam.first; i++)
    	for (int j=0; j< tam.second; j++){
            par.first = i;
            par.second = j;
            c =_tablero.preguntar_posicion(par);
            
            if (c != '_') {
                //comprobar posciones adyacentes a par
                int inicioi = par.first - 1;
                int fini = par.first + 2;
                int inicioj = par.second - 1;
                int finj = par.second + 2;
                
                //Indices dentro del tablero
                if (inicioi < 0)
                    inicioi = 0;
                if (fini > tam.first)
                    fini = tam.first;
                if (inicioj < 0)
                    inicioj = 0;
                if (finj > tam.second)
                    finj = tam.second;
                
                //recorrer submatriz
                aux = 0;
                for (int i = inicioi; i < fini; i++)
                            for (int j= inicioj; j< finj; j++){
                                    par2.first = i;
                                    par2.second = j;
                                    if (_tablero.preguntar_posicion(par2) == c)
                                        aux++;
                            }
                            
                if (aux >= 2)
                    return true;
            }
	}
        
    return false;
}

unsigned int breaking_blocks::bloques() const {
    
    unsigned int aux = 0;
    pair<unsigned int,unsigned int> tam = _tablero.size();
    pair<unsigned int,unsigned int> par;
    
    for (int i=0; i< tam.first; i++)
    	for (int j=0; j< tam.second; j++){
            par.first = i;
            par.second = j;
            if (_tablero.preguntar_posicion(par) == '_')
                aux++;
	}
    
    return aux;
    
}

void breaking_blocks::imprimir_tablero() const{
    
    
    cout << _tablero;
    
}
