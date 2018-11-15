
#include"SecuenciaDinamicaContigua.h"
#include<ctime>
#include<random>


int main() {

	srand(time(0));

	SecDinCont secuencia1; //Secuencia dinámica

	for (int i = 0; i < TAMANIO; i++) //completo la secuencia
		secuencia1.insertarElemento(rand() % 15 + 1);
	
	secuencia1.imprimirElemento();//pruebas...
	secuencia1.buscarElemento(8);
	secuencia1.buscarElemento(54);
	secuencia1.eliminarElemento(54);
	secuencia1.eliminarElemento(8);
	secuencia1.imprimirElemento();
	secuencia1.eliminarElemento();
	secuencia1.imprimirElemento();
	
	system("pause");
	return 0;
}


