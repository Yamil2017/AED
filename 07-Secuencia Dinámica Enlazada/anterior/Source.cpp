#include"SecuenciaEnlazada.h"
#include<iostream>


int main() {

	secuencia secuencia1(3);
	secuencia1.agregarElemento(1);
	secuencia1.agregarElemento(2);
	secuencia1.imprimirSecuencia();
	secuencia1.agregarElemento(4);
	secuencia1.imprimirSecuencia();
	secuencia1.agregarElemento(54);
	secuencia1.imprimirSecuencia();

	
	system("pause");
	return 0;
}