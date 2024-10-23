/**
 * Project Untitled
 */


#ifndef _PERSONA_H
#define _PERSONA_H

#include <string>
using namespace std;

class Persona {
public: 
    
/**
 * @param nombre
 * @param peso
 * @param altura
 */
Persona(string nombre, float peso, float altura);
    
string to_string();
protected: 
    string nombre;
    float peso;
    float altura;
};

#endif //_PERSONA_H
