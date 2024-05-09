/**
 * Project Untitled
 */


#ifndef _JEFEPROYECTO_H
#define _JEFEPROYECTO_H

#include <iostream>
#include <string>
using namespace std;

#include "Empleado.h"


class JefeProyecto: public Empleado {
	
	friend ostream & operator<<(ostream &, const JefeProyecto &);
		
public: 
    
/**
 * @param nombre
 * @param apellidos
 * @param codigo
 * @param sueldo
 * @param incentivos
 */
JefeProyecto(string nombre, string apellidos, int codigo, double sueldo, double incentivos);
~JefeProyecto();

protected: 
    
private: 
    double incentivos;
};

#endif //_JEFEPROYECTO_H
