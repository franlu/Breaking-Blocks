#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/tablero.h"

using namespace std;

int main(int argc, char* argv[]){

const char* names [] = 
{
"tablero", "tablero1", "preguntar_posicion", "eliminar_posicion", "size", "operator<<"
};
int index = 0;
if (argc >= 2){
if (strcmp(argv[1],names[0]) == 0 )
    index = 1;
else if (strcmp(argv[1],names[1]) == 0)
         index= 2;
     else if (strcmp(argv[1],names[2]) == 0)
              index = 3;
          else if (strcmp(argv[1],names[3]) == 0)
                   index = 4;
               else if (strcmp(argv[1],names[4]) == 0)
                        index = 5;
                    else if (strcmp(argv[1],names[5]) == 0)
                             index = 6;
}               

switch(index){
    case 1:
        {
        cout << endl << "tablero(const pair<unsigned int,unsigned int>& par);" << endl;
                cout << "====================================================" << endl;
                        pair<unsigned int,unsigned int> par_1(6,6);
                        tablero tab1(par_1);
                cout << endl << "==========================OK========================" << endl;
        }
        break;
    case 2:
        {
        cout << endl << "tablero(const pair<unsigned int,unsigned int>& par, const list<char>& bloques);" << endl;
                cout << "===============================================================================" << endl;
                        pair<unsigned int,unsigned int> par2(2,2);
                        list<char> bloques(4,' ');                    
                        tablero t2(par2,bloques);
        cout << endl << "================================================OK==============================" << endl;
        }
        break;
    case 3:
        {
        cout << endl << "char preguntar_posicion(const pair<unsigned int,unsigned int>& par) const;" << endl;
                cout << "===============================================================================" << endl;
                        pair<unsigned int,unsigned int> par_3(3,3);
                        tablero tab3(par_3);
                        pair<unsigned int,unsigned int> par3a(0,0);
                        pair<unsigned int,unsigned int> par4a(2,0);
                        cout << tab3.preguntar_posicion(par3a) << endl;
                        cout << tab3.preguntar_posicion(par4a) << endl;
        cout << endl << "================================================OK==============================" << endl;
        }
        break;
    case 4:
        {
        cout << endl << "int tablero::eliminar_posicion(const pair<unsigned int,unsigned int>& par)" << endl;
                cout << "===============================================================================" << endl;
                    pair<unsigned int,unsigned int> par_4(3,3);
                    char tableroc[] = {'1','3','2','7','1','2','8','1','0'};
                    list<char> bloques (tableroc, tableroc + sizeof(tableroc) / sizeof(char) );
                    tablero tab4(par_4,bloques);
                    cout << tab4 << endl;
                    pair<unsigned int,unsigned int> par4a(atoi(argv[2]),atoi(argv[3]));
                    cout << endl << "bloque a eliminar: " << par4a.first << "," << par4a.second << endl;
                    cout << "bloques eliminados: " << tab4.eliminar_posicion(par4a) << endl;
                    cout << tab4 << endl;
        cout << endl << "================================================OK==============================" << endl;
        }
        break;
    case 5:
        {
        cout << endl << "pair<unsigned int,unsigned int> tablero::size() const" << endl;
                cout << "===============================================================================" << endl;
                    pair<unsigned int,unsigned int> par_5(5,5);
                    tablero tab5(par_5);
                    cout << "tab_vector.size(): " << tab5.size().first << "," << tab5.size().second << endl;
        cout << endl << "================================================OK==============================" << endl;
        }
        break;
    case 6:
        {
        cout << endl << "ostream& operator<< (ostream& os, const tablero& t)" << endl;
                cout << "===============================================================================" << endl;
                    pair<unsigned int,unsigned int> par_6(6,6);
                    tablero tab6(par_6);
                    cout << tab6 << endl;
        cout << endl << "================================================OK==============================" << endl;
        }
        break;
    default:
        {
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
                        list<char> bloques(4,' ');                    
                        tablero t2(par2,bloques);
        cout << endl << "================================================OK==============================" << endl;
    
        cout << endl << "char preguntar_posicion(const pair<unsigned int,unsigned int>& par) const;" << endl;
                cout << "===============================================================================" << endl;
                        pair<unsigned int,unsigned int> par3(0,0);
                        pair<unsigned int,unsigned int> par4(3,0);
                        cout << t2.preguntar_posicion(par3) << endl;
                        cout << t2.preguntar_posicion(par4) << endl;
        cout << endl << "================================================OK==============================" << endl;
    
        cout << endl << "int tablero::eliminar_posicion(const pair<unsigned int,unsigned int>& par)" << endl;
                cout << "===============================================================================" << endl;
                    pair<unsigned int,unsigned int> par5(1,1);
                    cout << t2.eliminar_posicion(par5) << endl;
        cout << endl << "================================================OK==============================" << endl;
    
        cout << endl << "pair<unsigned int,unsigned int> tablero::size() const" << endl;
                cout << "===============================================================================" << endl;
                    cout << "tab_vector.size(): " << t1.size().first << "," << t1.size().second << endl;
        cout << endl << "================================================OK==============================" << endl;
    
        cout << endl << "ostream& operator<< (ostream& os, const tablero& t)" << endl;
                cout << "===============================================================================" << endl;
                    cout << t1 << endl;
                    cout << t2 << endl;
        cout << endl << "================================================OK==============================" << endl;
        }
        break;

}
}
