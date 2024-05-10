#ifndef LISTA_H
#define LISTA_H

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

template <class T> Lista<T>::~Lista(){}

