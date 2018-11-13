#include"Template.h"
#include<iostream>
#include<iomanip>
//#include<array>

int main() {

	Matriz<int, 20, 8> nueva;
	for (int i = 1; i <= nueva.nFilas; i++)
		for (int j = 1; j <= nueva.nColumnas; j++)
			set(nueva, i + j-2, i, j);
	print(nueva);
	std::cout << get(nueva, 17, 7) << std::endl;
	std::cout << get(nueva, 8, 5) << std::endl;

	/***********************PRUEBA TEMPLATEBETA_H************************/
	/*Matriz<int> nueva;
	set(nueva,1,1,1);
	std::cout << get(nueva, 1, 1) << std::endl;
	set(nueva, 2, 1, 2);
	set(nueva, 3, 2, 1);
	set(nueva, 4, 2, 2);
	print(nueva);*/
	/***********************PRUEBA TEMPLATEBETA_H************************/


	/*std::array<int, 5>arreglo;//Inicialización con for por rango de un arreglo
	for (auto& a : arreglo)
		a = 5;
	for (auto a : arreglo)
		std::cout << a << '\n';*/

	system("pause");
	return 0;
}