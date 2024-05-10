#ifndef LISTA_H
#define LISTA_H

#include <stdexcept>

template <class T> class Lista
{
	private:
		
		class Nodo {
			private:
				T dato;
				Nodo *sig;
				
			public:
				Nodo(T dato, Nodo *sig){ this->dato = dato; this->sig = sig; }
				
				T getDato(){ return this->dato; }
				Nodo *getSig(){ return this->sig; }
				
				void setDatos(T dato){ this->dato = dato; }
				void setSig(Nodo *sig){ this->sig = sig; }
				
				~Nodo(){}
				
		};	
	
	
		// Los atributos de la clase Lista:
		Nodo *lista;
		
	
	public:
		Lista();
		void insertar(T);
		void imprimir();
		bool buscar(T);
		T get(int);
		void borrarTodos();
		~Lista();
	protected:
};

#endif

template <class T> Lista<T>::Lista(){
	lista = nullptr;
}

template <class T> void Lista<T>::insertar(T dato){
	
	Nodo *nuevo = new Nodo(dato, this->lista);		
	this->lista = nuevo;	
}

template <class T> void Lista<T>::imprimir(){
	Nodo *aux = this->lista;
	
	while (aux != nullptr){
		std::cout << aux->getDato() << " ";
		aux = aux->getSig(); // Avanzar al siguiente nodo.
	}
	std::cout << std::endl;
}

template <class T> bool Lista<T>::buscar(T dato){
	Nodo *aux = this->lista;
	
	while (aux != nullptr){
		if  (aux->getDato() == dato)
			return true;
		
		aux = aux->getSig(); // Avanzar al siguiente nodo.
	}
	return false;
}

template <class T> void Lista<T>::borrarTodos(){
	Nodo *aux;
	
	while (this->lista != nullptr){
		aux = this->lista;
		this->lista = aux->getSig();
		
		delete aux;
		aux = nullptr;
	}
}

template <class T> T Lista<T>::get(int pos){
	Nodo *aux = this->lista;
	int i=0;
	
	while (aux != nullptr && i < pos){
		aux = aux->getSig();
		i++;
	}
	
	if (aux != nullptr)
		return aux->getDato();
	else 
		throw std::out_of_range("Posicion "+std::to_string(pos) + " fuera de rango");
}

template <class T> Lista<T>::~Lista(){
	this->borrarTodos();
}

