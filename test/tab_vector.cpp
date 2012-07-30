#include <iostream>

#include "../include/tablero.h"

using namespace std;

int main(int argc, char *argv[]){
    
    cout << endl << "   TEST TABLERO VECTOR   " << endl;
            cout << "=========================" << endl;
    
    cout << endl << "tablero(const pair<unsigned int,unsigned int>& par);" << endl;
            cout << "====================================================" << endl;
                    pair<unsigned int,unsigned int> par(5,5);
                    tablero t1(par);
    cout << endl << "==========================OK========================" << endl;
    
    cout << endl << "tablero(const pair<unsigned int,unsigned int>& par, const list<char>& bloques);" << endl;
            cout << "===============================================================================" << endl;
                    pair<unsigned int,unsigned int> par2(2,2);
                    list<char> bloques(4,'3');                    
                    tablero t2(par2,bloques);
    cout << endl << "================================================OK==============================" << endl;




}

