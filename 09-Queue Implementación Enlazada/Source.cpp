#include"Queue.h"
#include<random>
#include<ctime>
#include<iostream>
int main(){

	srand(time(0));
	Cola nuevo;

	for(int i=0;i<20;i++)
		enqueue(nuevo,rand()%500);

	print(nuevo);
	//std::cout<<"Frente: "<<nuevo.frente<<" "<<nuevo.frente->dato<<" "<<nuevo.frente->siguiente<<std::endl;
	//std::cout<<"Fin: "<<nuevo.fin<<" "<<nuevo.fin->dato<<" "<<nuevo.fin->siguiente<<std::endl;
	dequeue(nuevo);
	dequeue(nuevo);
	dequeue(nuevo);
	dequeue(nuevo);
	dequeue(nuevo);
	print(nuevo);
	vaciar(nuevo);
	print(nuevo);



	return 0;
}
