#include <vector>
#include <string>
#include <iostream>
#include <stdexcept>
#include <map>

#include "hora.h"
#include "agenda.h"

using namespace std;

int prueba1(){
	vector<int> v(10,-1);
	vector<string> v2(10,"");
	vector<int>::iterator it;
	vector<int>::reverse_iterator itr;
	cout << v.size() << endl;
	
	for (int i = 0 ; i < v.size() ; i++)
		v[i] = i*5;
	
	cout << "Con size" << endl;
	for (int i = 0 ; i < v.size() ; i++)
		cout << v[i] << " " << v.at(i) << endl;
	
	cout << "Con iterator" << endl;
	for (it = v.begin() ; it!=v.end() ; it++){
		cout << *it << "\t" << " " << 
			(it - v.begin()) << endl; 
		
	}
		
	cout << "Con iterator saltar 3" << endl;
	for (it = v.begin()+3 ; it<v.end() ; it+=2)
		cout << *it << endl;	
		
	cout << "Con reverse iterator " << endl;
	for (itr = v.rbegin() ; itr!=v.rend() ; itr++)
		cout << *itr << endl;	
		
		
	// Acceso a los elementos
	try {
		cout << v[25] << endl;
		//cout << v.at(25) << endl;
		
	} catch (out_of_range &e){
		cout << e.what() << endl;
	}
	for (int i = 0 ; i < 10 ; i++)
		v.push_back(i*100);
	cout << "size: " << v.size() << endl; 
}

void prueba2(){
	// Oper.relacionales con vector
	vector<int> v1;
	vector<int> v2;
	
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	
	v2.push_back(1);
	v2.push_back(2);
	v2.push_back(3);
	v2.push_back(38);
	
	if (v1 == v2)
		cout << "iguales" << endl;
	else
		cout << "NO iguales" << endl;
		
	v2.erase(v2.begin()+1, v2.end());
	cout << "v2 size: " << v2.size() << endl;
}
void prueba3(){
	vector<Hora> h1;
	vector<Hora> h2;
	
	for (int i = 0 ; i < 5 ; i++){
		h1.push_back(Hora(i));
		h2.push_back(Hora(i));
	}
	
	if (h1 == h2)
		cout << "iguales" << endl;
	else
		cout << "NO iguales" << endl;
}

void prueba4(){
	// Uso de mapas:
	map<string, int> mapa1;
	map<string, int>::iterator it;
	
	mapa1["L"] = 1;
	mapa1["M"] = 2;
	mapa1["X"] = 3;
	mapa1["J"] = 4;
	mapa1["A"] = 5;
	
	for (it = mapa1.begin() ; it != mapa1.end(); it++)
		cout << it->first << " ==> " << it->second << endl;	
		
	map<string, vector<int> > m2;
	m2["AA"].push_back(1);
	
}

void pruebaAgenda()
{
	Agenda agenda;
	
	agenda.addEvento(Date(20,7,2017), Hora(9), "Clase C++");
	agenda.addEvento(Date(20,7,2017), Hora(14), "Comida");
	agenda.addEvento(Date(21,7,2017), Hora(9), "Clase C++");
	agenda.addEvento(Date(21,7,2017), Hora(9), "Clase Python");
	agenda.println();
}

int  main(){
	pruebaAgenda();
}










