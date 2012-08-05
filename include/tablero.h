#ifndef __TABLERO__
#define __TABLERO__
#ifdef __VECTOR_
  #include <vector>
#endif
#include <list>
#include <ostream>
#include <iostream>
using namespace std;

class tablero {
  public:
    /**
      @brief Construye un tablero de tamaño par.first x par.second
      @param par par conteniendo número de filas y número de columnas para jugar
    */    
    tablero(const pair<unsigned int,unsigned int>& par);
    /**
      @brief Construye un tablero a partir de una lista
      @param par tamaño del tablero
      @param bloques lista de caracteres conteniendo toda la informacion del
      tablero.
      Constructor de la clase que recibe el tamanio del tablero dado por un par
      (x,y) y una lista de caracteres que corresponden a los bloques del tablero
      dado por filas.
    */
    tablero(const pair<unsigned int,unsigned int>& par, const list<char>& bloques);
    
    tablero(const string& archivo);
    
    /**
      @brief Obtiene un caracter del tablero
      @param par Coordenadas de las que se quiere obtener un caracter
      @return Devuelve el caracter de la posicion (par.first, par.second)
      Funcion que devuelve el elemento que ocupa las coordenadas del tablero
      dadas por un par (x,y) pasado como parametro. En el caso en que en esa
      posicion no haya ningun bloque entonces se devolvera el caracter '_'.
    */
    char preguntar_posicion(const pair<unsigned int,unsigned int>& par) const;

    /**
      @brief Permite eliminar una posicion del tablero
      @param par Coordenadas del elemento a eliminar
      @return Devuelve el numero de casillas eliminadas

      Elimina tanto el elemento de la casilla par.first,par.second y todas las
      que esten conectadas a ella y sus adyacentes y que tengan el mismo valor.
      Si esta vacia no se hace nada.
      
    */
    int eliminar_posicion(const pair<unsigned int,unsigned int>& par);

    /**
      @brief Devuelve el tamaño del tablero.
    */
    pair<unsigned int,unsigned int> size() const;
    
  private:
    #ifdef __VECTOR_
      vector< vector<char> > _matriz;
    #endif
    #ifdef __LIST_
      list< list<char> > _matriz;
    #endif
    pair<unsigned int,unsigned int> _tam;
  
};

ostream& operator<<(ostream& os, const tablero& t);
#endif
