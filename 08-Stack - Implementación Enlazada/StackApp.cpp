/*
 * Descomposición de un número en sus cifras elementales
 *
 * */
#include "Stack.h"
#include<iostream>

void descomposicion(Pila&,int&);

int main(){
	int numero{};
	Pila stack;

	descomposicion(stack,numero);

	return 0;
}

void descomposicion(Pila& stack,int& numero){
	bool bandera=true;
	const int divisor{10};
	short int indice{};
	std::cout<<"Ingrese un número natural a descomponer en sus cifras elementales: ";
	std::cin>>numero;
	do{
		if(numero>0){
			push(stack,numero%divisor);
			indice++;
			numero=numero/divisor;
		}else
			bandera=false;
	}while(bandera==true);
	int cifra;
	for(auto i{0};i<indice;++i){
		pop(stack,cifra);
		std::cout<<"10^"<<indice-i-1<<" cifra: "<<cifra<<'\n';}
}
