/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H


#include <string>
#include <iostream>
using namespace std;

#include "TablaBaremos.h"

class Empleado {
	
	friend ostream & operator<<(ostream &os, const Empleado &);
	
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
~Empleado();

protected: 
    string nombre;
    string apellidos;
    int codigo;
    double sueldo;
    

};

#endif //_EMPLEADO_H
