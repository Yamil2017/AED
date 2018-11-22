#include"SecDin.h"
#include<iostream>

Lista::Lista(int tamanio) :cantidadElementos{ tamanio }, ingresados{ 0 } {
	if(cantidadElementos>0)
		arreglo = new int[cantidadElementos];
	else {
		std::cout << "Tamanño inválido, se creara array por default de 5 elementos.\n";
		Lista();
	}
}

Lista::Lista() : cantidadElementos{ 5 }, ingresados{ 0 } {
	arreglo = new int[cantidadElementos];
}

Lista::~Lista() {
	delete[] arreglo;
}

Lista& set(Lista& list, int elemento,int valor) {
	if (elemento >= 0 and elemento < list.cantidadElementos) {
		list.arreglo[elemento] = valor;
		list.ingresados++;
	}
	else
		std::cout << "Ubicación inexistente.\n";
	return list;
}

bool isEmpty(const Lista& list) {
	return (list.ingresados > 0) ? true : false;
}

void print(const Lista& list) {
	for (int i = 0; i < list.ingresados; i++)
		std::cout << get(list,i) << " ";
	std::cout << std::endl;
}

int get(const Lista& list, int elemento) {
	return list.arreglo[elemento];
}

int tamanio(const Lista& list) {
	return list.cantidadElementos;
}