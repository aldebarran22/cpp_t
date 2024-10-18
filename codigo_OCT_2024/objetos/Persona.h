#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona
{
	private:
	// Att. de instancia
	// tipo   nombreAtt
	std::string nombre;
	float peso;
	float altura;
	
	// Att. de la clase:
	static int numPersonas;
	
	
	public:
		//Persona(); // constructor por defecto
		Persona(std::string="", float=0.0, float=0.0);
		
		static int getNumPersonas();
		
		// Getters / Setters
		std::string getNombre(){ return this->nombre; }
		float getPeso(){ return this->peso; }
		float getAltura(){ return this->altura; }
		
		void setNombre(std::string nombre){ this->nombre = nombre; }
		void setPeso(float peso){ this->peso = peso; }
		void setAltura(float altura){ this->altura = altura; }		
		
		
		//Persona(const Persona &);
		//Persona & operator=(const Persona &); 
		void engordar(float=1.0);
		std::string to_string();
		~Persona();
	protected:
};

#endif
