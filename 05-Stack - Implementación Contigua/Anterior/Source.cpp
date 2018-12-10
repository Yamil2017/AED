#include"PilaContigua.h"
#include<ctime>
#include<random>


int main() {

	srand(time(0));

	Pila pila1; //Genero Pila
	
	for (int i = 0; i < TAMANIO; i++) //Completo Pila
		pila1.agregarDato(rand() % 15 + 1);
	pila1.mostrarDato();//prueba, posee otros métodos a probar-funcionan-

		
	system("pause");
	return 0;
}

