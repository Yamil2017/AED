#include"SecDin.h"
#include<iostream>
#include <stdlib.h>

#include<random>
#include<ctime>

//prototipos

bool esRepetido(Lista &repetidos, int numero, int len);
void obtenerAleatorio(Lista &repetidos, int cantidad);
void imprimir(Lista &repetidos, Lista &nueva, int cantidad);
//fin prototipos


using namespace std;

int main() {

	srand(time(NULL));
	unsigned int cant = 0, numeros;

	cout << "Cuantos numeros desea mezclar?\t";
	cin >> cant;
	Lista nueva(cant);
	cout << "OK\n";
	cout << "Ingrese sus numeros \n";
	for (int i = 0; i < tamanio(nueva); i++) {
		cin >> numeros;
		set(nueva, i, numeros);
	}

	Lista repetidos(cant);
	obtenerAleatorio(repetidos, tamanio(nueva));

	cout << "\nMezclados!\n";
	cout << " ** ";
	imprimir(repetidos, nueva, cant);
	cout << " **\n" << endl;
	system("pause");
	return 0;
}


void obtenerAleatorio(Lista &repetidos, int tam) {

	int aleatorio;
	srand(time(NULL));
	aleatorio = rand() % (tam);
	set(repetidos, 0, aleatorio);
	for (int j = 1; j < tam; ++j) {
		aleatorio = rand() % (tam);
		while (esRepetido(repetidos, aleatorio, j) == true) {
			aleatorio = rand() % (tam);
		}
		set(repetidos, j, aleatorio);
	}
}

bool esRepetido(Lista &repetidos, int numero, int len) {

	for (int i = 0; i < len; i++) {

		if (numero == get(repetidos, i))
			return true;
	}
	return false;
}


void imprimir(Lista &repetidos, Lista &nueva, int cantidad) {


	int R = get(repetidos, 0);
	cout << get(nueva, R);

	for (int i = 1; i < cantidad; ++i) {
		R = get(repetidos, i);
		cout << " - " << get(nueva, R);
	}
}
