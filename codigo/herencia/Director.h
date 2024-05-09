/**
 * Project Untitled
 */


#ifndef _DIRECTOR_H
#define _DIRECTOR_H

#include <string>
#include <iostream>

using namespace std;

#include "Empleado.h"


class Director: public Empleado {
	
	friend ostream & operator<<(ostream &, const Director &);
	
public: 
    
/**
 * @param nombre
 * @param apellidos
 * @param codigo
 * @param sueldo
 * @param paga
 * @param objetivos
 */
Director(string nombre, string apellidos, int codigo, double sueldo, double paga, double objetivos);
string cv() const;
~Director();

protected: 
    
private: 
    double paga;
    double objetivos;
};

#endif //_DIRECTOR_H
