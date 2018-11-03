#include"Queue.h"
#include<iostream>

Eslabon::Eslabon():dato{},siguiente{nullptr}{}

Cola::Cola():frente{nullptr},fin{nullptr}{}

Cola& enqueue(Cola& queue,int valor){
	Eslabon*nuevoEslabon=new Eslabon;
	nuevoEslabon->dato=valor;
	nuevoEslabon->siguiente=nullptr;
	if(isEmpty(queue)){
		queue.frente=nuevoEslabon;
		queue.fin=queue.frente;
	}else{
		queue.fin->siguiente=nuevoEslabon;
		queue.fin=nuevoEslabon;
	}
	std::cout<<"El valor "<<queue.fin->dato<<" se ha ingresado a la cola"<<std::endl;
	return queue;
}

bool isEmpty(const Cola& queue){
	return (queue.frente==nullptr)?true:false;
}

void print(const Cola& queue){
	Eslabon*aux=queue.frente;
	while(aux!=nullptr){
		std::cout<<aux->dato<<" ";
		aux=aux->siguiente;
	}
	std::cout<<"\nFin de la impresi�n"<<std::endl;
}

Cola& dequeue(Cola& queue){
	Eslabon*aux=queue.frente;
	if(queue.frente->siguiente==nullptr||isEmpty(queue)){
		queue.frente=nullptr;
		queue.fin=queue.frente;
		std::cout<<"Elemento "<<aux->dato<<" eliminado."<<std::endl;
		std::cout<<"Cola vac�a."<<std::endl;
	}else{
		queue.frente=queue.frente->siguiente;
		std::cout<<"Elemento "<<aux->dato<<" eliminado."<<std::endl;
	}
	delete aux;
	return queue;
}

Cola& vaciar(Cola& queue){
	if(!isEmpty(queue)){
		dequeue(queue);
		vaciar(queue);
	}
	return queue;
}
