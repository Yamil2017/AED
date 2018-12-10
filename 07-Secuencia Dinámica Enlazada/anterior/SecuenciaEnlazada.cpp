#include"SecuenciaEnlazada.h"
#include<iostream>


secuencia::secuencia(int n) :cantidad{ n }, contador{ 0 }, sec{ nullptr } {
	sec = new int[cantidad];
}

void secuencia::agregarElemento(int dato) {
	if (contador < cantidad ) {
		sec[contador] = dato;
		contador++;
	}
	else
		std::cout << "secuencia completa, último elemento no insertado. Cree una nueva con mayor capacidad." << std::endl;
	
}

void secuencia::imprimirSecuencia() {
	for (int i = 0; i < contador; ++i)
		std::cout << "elemento " << i + 1 << ": " <<sec[i]<< std::endl;
	std::cout << "Fin de la impresión" << std::endl;

}
secuencia::~secuencia() {

	delete[] sec;

}

