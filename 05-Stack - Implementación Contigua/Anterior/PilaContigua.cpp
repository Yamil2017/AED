#include"PilaContigua.h"
#include<iostream>

Pila::Pila():elementos{0},pila{}{
}

void Pila::mostrarDato() {
	
	for (int i = elementos; i >= 0; --i) {
		std::cout << pila.at(i) << " ";
		
	}
	
};

void Pila::agregarDato(int dato) { //PUSH

	if (elementos < TAMANIO) {
		pila.at(elementos) = dato;
		elementos++;
		if (elementos == TAMANIO) {//permite que elementos sea siempre menor a TAMANIO(en caso 
			elementos--;			//de llegar al último elemento de la pila)
			return;
		}
	}
	else
		std::cout << "La pila está completa"<<std::endl;

}

void Pila::eliminarDato() { //POP
	elementos--;
}

void Pila::buscarDato(int dato) {
	bool presencia = false;
	for (auto valor : pila)
		if (valor == dato)
			presencia = true;
	(presencia == true) ? std::cout << "el valor se encuentra en la pila" : std::cout << "El valor no se encuentra en la pila";
}