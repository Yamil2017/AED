#include"SecuenciaDinamicaContigua.h"
#include<iostream>


SecDinCont::SecDinCont() :elementos{}, secuencia{}{}

void SecDinCont::insertarElemento(int valor) {

	if (elementos < TAMANIO) {
		secuencia.at(elementos) = valor;
		elementos++;
		if (elementos == TAMANIO) {
			elementos--;
			return;
		}
	}
	else
		std::cout << "La secuencia esta completa, elimine elementos antes de agregar nuevos" << std::endl;
}

void SecDinCont::buscarElemento(int valor){
	bool bandera=false;
	for (auto a : secuencia)
		if (valor == a)
			bandera = true;
	(bandera == true) ? std::cout << "El valor " << valor << " se encuentra en la secuencia XD"<<std::endl : std::cout <<
		"El valor " << valor << " no se encuentra en la secuencia U.u"<<std::endl;
	
}

void  SecDinCont::eliminarElemento() { //Elimina por criterio FIFO
	for (int i = 1; i <= elementos; i++)
		secuencia.at(i - 1) = secuencia.at(i);
	elementos--;
}

void SecDinCont::eliminarElemento(int valor) {//Elimina todos los elementos que coincidan con 'valor'
	
	int posicion = TAMANIO;
	for (int i = 0; i < elementos; i++)
		if (valor == secuencia.at(i))
			posicion = i;
	if (posicion < elementos) {
		for (int i = posicion; i < elementos; i++)
			secuencia.at(i) = secuencia.at(i + 1);
		elementos--;
		eliminarElemento(valor);//repite proceso hasta eliminar todos los elementos que coincidan con 'valor'
	}
	
	else
		return;
}

void SecDinCont::imprimirElemento() {

	for (int i = 0; i <= elementos; i++)
		std::cout << secuencia.at(i)<<" ";
	std::cout<<std::endl;

}