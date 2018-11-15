#include"List.h"
#include<iostream>

int main(){

	Lista lista;

	set(lista,"Hola, ");
	set(lista,"soy Yamil ");
	set(lista,"y estudio AyED.");
	print(lista);
	std::cout<<get(lista,1)<<'\n';
	std::cout<<get(lista,2)<<'\n';
	std::cout<<get(lista,1)<<'\n';
	vaciar(lista);
	print(lista);


	return 0;
}
