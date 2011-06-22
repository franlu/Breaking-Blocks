#include "breaking_blocks.h"

breaking_blocks::breaking_blocks(const pair<unsigned int,unsigned int>& par):_tablero(par){
    
    
}

/*breaking_blocks::breaking_blocks(const string& archivo){
    
    
    
}*/

unsigned int breaking_blocks::eliminar_posicion(const pair<unsigned int,unsigned int>& par){
    
    
    
    
}

bool breaking_blocks::mas_movimientos() const {
    
    
    
    return true;
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
