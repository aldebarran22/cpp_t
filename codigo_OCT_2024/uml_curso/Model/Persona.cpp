/**
 * Project Untitled
 */


#include "Persona.h"

/**
 * Persona implementation
 */


/**
 * @param nombre
 * @param peso
 * @param altura
 */
Persona::Persona(string nombre, float peso, float altura) {
	this->nombre = nombre;
	this->peso = peso;
	this->altura = altura;
}

/**
 * @return string
 */
string Persona::to_string() {
    return this->nombre + " " + to_string(this->peso) + " " + to_string(this->altura);
}
