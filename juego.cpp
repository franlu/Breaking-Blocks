#include <iostream>

#include "breaking_blocks.h"

using namespace std;

int main(int argc, char *argv[]){
    
pair<unsigned int,unsigned int> par(5,5);
pair<unsigned int,unsigned int> pos(6,6);
vector<char> aux(par.second,'X');
list<char> lista1(36,'Z');

tablero t(par);
tablero t1(pos,lista1);

	
	cout << "BREAKING BLOCKS" << endl;
        cout << "===============" << endl;

        /*for (int i=0; i < par.second; i++)
           cout << aux[i] << "_";
        cout << t << endl;
        
        cout << "Posicion (4,4) = " << t.preguntar_posicion(pos) << endl;
        */
        cout << t1 <<endl;
              
	
        cout << "===============" << endl;

}

