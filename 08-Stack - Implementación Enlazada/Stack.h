#ifndef STACK_H
#define STACK_H

struct Eslabon{
	Eslabon();
	int dato;
	Eslabon *siguiente;
};

struct Pila{
	Pila();
	Eslabon *top;
};
void print(const Pila&);
bool isEmpty(const Pila&);
Pila& pop(Pila&,int&);
Pila& push(Pila&,int);
Pila& vaciar(Pila&);
#endif
