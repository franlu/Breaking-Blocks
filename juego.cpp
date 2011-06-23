#include <iostream>

#include "breaking_blocks.h"

using namespace std;

int main(int argc, char *argv[]){
    
pair<unsigned int,unsigned int> par(5,5);
list<char> lista1;

lista1.push_back ('1');
lista1.push_back ('1');
lista1.push_back ('3');
lista1.push_back ('4');
lista1.push_back ('0');

lista1.push_back('5');
lista1.push_back('6');
lista1.push_back('7');
lista1.push_back('8');
lista1.push_back('1');

lista1.push_back('9');
lista1.push_back('1');
lista1.push_back('2');
lista1.push_back('3');
lista1.push_back('0');

lista1.push_back('4');
lista1.push_back('5');
lista1.push_back('2');
lista1.push_back('1');
lista1.push_back('7');

lista1.push_back('9');
lista1.push_back('7');
lista1.push_back('4');
lista1.push_back('3');
lista1.push_back('9');

tablero t1(par,lista1);
	
	cout << endl << "   BREAKING BLOCKS   " << endl;
        cout << "=====================" << endl;

        
            cout << t1 <<endl;
            pair<unsigned int,unsigned int> par1(0,0);
            cout << endl << "Eliminadas = " << t1.eliminar_posicion(par1);
            cout << t1 <<endl;
              
	
        cout << endl << "=====================" << endl;

}

