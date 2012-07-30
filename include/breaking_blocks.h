#ifndef __BREAKING_BLOCKS__
#define __BREAKING_BLOCKS__
#include "tablero.h"

using namespace std;

class breaking_blocks {
  public:
    /**
      @brief Construye un tablero de tamaño par.first x par.second
      @param par par conteniendo número de filas y número de columnas para jugar
    */
    breaking_blocks(const pair<unsigned int,unsigned int>& par);
    /**
      @brief Construye un tablero cargandolo de un archivo
      @param archivo nombre del archivo donde esta el tablero

      Carga un tablero guardado en un archivo, si no existe o hay algun problema el tablero deberia estar vario.
    */
    breaking_blocks(const string& archivo);

    /**
       @brief Elimina una posicion y devuelve el numero de puntos
       @param par indica las coordenadas del punto a eliminar par.first,par.second
       @return Devuelve el numero de puntos asociado a esa casilla

       Elimina una casilla y todas las adyacentes que tengan el mismo valor que ella, y de igual para forma para las adyacentes de ellas.
       Debe haber al menos dos casillas adyacentes, si no las hay no se hace nada y se devuelve 0
       A partir de x=2 seria x*(x-1)
    */
    unsigned int eliminar_posicion(const pair<unsigned int,unsigned int>& par);

    /**
      @brief Indica si hay mas movimiento posibles
      @return devuelve true si hay al menos dos casillas adyacentes con el mismo valor
    */
    bool mas_movimientos() const;

    /**
       @brief Devuelve el numero de bloques que quedan libres
    */
    unsigned int bloques() const;
    /**
       @brief Imprime el tablero 
    */
    void imprimir_tablero() const;

  private:
    tablero _tablero;
};

#endif

