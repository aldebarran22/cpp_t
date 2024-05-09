/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H

class Empleado {
public: 
    
/**
 * @param nombre
 * @param apellidos
 * @param codigo
 * @param sueldo
 */
void Empleado(string nombre, string apellidos, int codigo, double sueldo);
    
/**
 * @param tabla
 */
void subirSueldo(TablaBaremos tabla);
protected: 
    string nombre;
    string apellidos;
    int codigo;
    double sueldo;
    
void Empleado();
};

#endif //_EMPLEADO_H