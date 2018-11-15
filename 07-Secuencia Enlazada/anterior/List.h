#pragma once
#include<iostream>


struct Eslabon{
	Eslabon();
	std::string cadena;
	Eslabon *siguiente;
};

struct Lista{
	Lista();
	int cantidadElementos;
	Eslabon*frente,*fin;
};

std::string get(const Lista&,int);
Lista& set(Lista&,std::string);
void print(const Lista&);
Lista& vaciar(Lista&);
bool isEmpty(const Lista&);
