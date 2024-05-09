/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H


#include <string>
using namespace std;

#include "TablaBaremos.h"

class Empleado {
public: 
    
/**
 * @param nombre
 * @param apellidos
 * @param codigo
 * @param sueldo
 */
Empleado(string nombre, string apellidos, int codigo, double sueldo);
    
/**
 * @param tabla
 */
void subirSueldo(TablaBaremos tabla);
protected: 
    string nombre;
    string apellidos;
    int codigo;
    double sueldo;
    
~Empleado();
};

#endif //_EMPLEADO_H
