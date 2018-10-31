#pragma once


struct Eslabon{
	Eslabon();
	int dato;
	Eslabon*siguiente;
};

struct Cola{
	Cola();
	Eslabon*frente,*fin;
};

Cola enqueue(Cola,const int);
Cola dequeue(Cola);
void print(const Cola);
bool isEmpty(const Cola);
Cola vaciar(Cola);
