#ifndef PILACONTIGUA_H
#define PILACONTIGUA_H
#include<array>

const size_t TAMANIO = 5;

class Pila {
		
	int elementos;
	std::array<int, TAMANIO> pila;


public:
	
	Pila();
	
	void agregarDato(int);
	void mostrarDato();
	void eliminarDato();
	void buscarDato(int);

};




#endif