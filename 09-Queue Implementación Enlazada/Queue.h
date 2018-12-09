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

Cola& enqueue(Cola&, int);
Cola& dequeue(Cola&,int&);
void print(const Cola&);
bool isEmpty(const Cola&);
Cola& vaciar(Cola&);
