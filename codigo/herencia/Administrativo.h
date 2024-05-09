/**
 * Project Untitled
 */


#ifndef _ADMINISTRATIVO_H
#define _ADMINISTRATIVO_H

#include "Empleado.h"

#include <iostream>
#include <string>
using namespace std;


class Administrativo: public Empleado {
	
	friend ostream & operator<<(ostream &os, const Administrativo &a);
	
public: 
    
/**
 * @param nombre
 * @param apellidos
 * @param codigo
 * @param sueldo
 * @param paga1
 * @param paga2
 */
Administrativo(string nombre, string apellidos, int codigo, double sueldo, double paga1, double paga2);
~Administrativo();

protected: 
    
private: 
    double paga1;
    double paga2;
};

#endif //_ADMINISTRATIVO_H
