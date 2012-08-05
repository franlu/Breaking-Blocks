#include <iostream>

#include "../include/breaking_blocks.h"

using namespace std;

void menu(){
    
    cout << "1.- Eliminar Posicion." << endl;
    cout << "2.- Es Posible eliminar mas bloques." << endl;
    cout << "3.- Numero de bloques eliminados." << endl;
    cout << "4.- Imprimir tablero." << endl;
    cout << "5.- Puntuacion." << endl;
    cout << "6.- Salir." << endl;
     
}

int main(int argc, char *argv[]){
    
pair<unsigned int,unsigned int> par_eli;    
pair<unsigned int,unsigned int> par(5,5);

unsigned int opcion;
int puntos_conseguidos = 0;
int puntos_totales = 0;

   
    string ruta;
    cout << "Introduce la ruta hacia el fichero que contiene el tablero:" << endl;
    cin >> ruta;
    breaking_blocks bb(ruta);
    cout << endl << "   BREAKING BLOCKS   " << endl;
            cout << "=====================" << endl;
                bb.imprimir_tablero();
    cout << endl << "=====================" << endl;
    
    
    menu();
    cout << endl << "Elige opcion " << endl;
    cin >> opcion;
    

while (opcion >0 && opcion < 6) {
    
        
    switch(opcion){
        
        case 1:
            if (!bb.mas_movimientos())
                cout << "Imposible eliminar mas bloques, consulta tu puntuacion." << endl;
            else{
                cout << "Intoduce la coordenada i" << endl;
                cin >> par_eli.first;
                cout << "Intoduce la coordenada j" << endl;
                cin >> par_eli.second;
            
                puntos_conseguidos = bb.eliminar_posicion(par_eli);
                cout << "Has conseguido " << puntos_conseguidos  << " puntos." << endl;
                puntos_totales += puntos_conseguidos;
            }
            break;
        case 2:
            if (bb.mas_movimientos())
                cout << "Utiliza tus neuronillas, aún se pueden eliminar mas bloques" << endl;
            else
                cout << "Imposible eliminar mas bloques, consulta tu puntuacion." << endl;
            break;
        case 3:
            cout << "Hasta el momento has eliminado " << bb.bloques() << " bloques." << endl;
            break;
        case 4:
            cout << endl << "   BREAKING BLOCKS   " << endl;
                    cout << "=====================" << endl;
                            bb.imprimir_tablero();
            cout << endl << "=====================" << endl;
            break;
        case 5:
            cout << "Total: " << puntos_totales << " puntos." << endl;
            break;
        default:
            break;       
        
    }
    
    menu();
    cout << endl << "Elige opcion " << endl;
    cin >> opcion;
}

}

