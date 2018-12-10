#include"List.h"
#include<iostream>


Eslabon::Eslabon():cadena{'\0'},siguiente{nullptr}{}

Lista::Lista():cantidadElementos{},frente{nullptr},fin{nullptr}{}

bool isEmpty(const Lista& list){
	return (list.frente==nullptr)?true:false;
}

std::string get(const Lista& list,int elemento){
	if(elemento<list.cantidadElementos){
		Eslabon *aux=list.frente;
		for(int i=0;i<=elemento;i++)
			aux=aux->siguiente;
		return aux->cadena;
	}
	else{
		std::string salida="Elemento inexistente";
		return salida;
	}
}

Lista& set(Lista& list,std::string palabra){
	Eslabon *nuevoEslabon=new Eslabon;
	nuevoEslabon->cadena=palabra;
	nuevoEslabon->siguiente=nullptr;
	if(list.frente==nullptr){
		list.frente=nuevoEslabon;
		list.fin=list.frente;
	}else{
		list.fin->siguiente=nuevoEslabon;
		list.fin=nuevoEslabon;
	}
	list.cantidadElementos++;
	return list;
}

void print(const Lista& list){
	Eslabon *aux=list.frente;
	/*for(int i=0;i<list.cantidadElementos;i++){
		std::cout<<"Elemento "<<i<<": "<<aux->cadena<<'\n';
		aux=aux->siguiente;
	}*/
	while(aux!=nullptr){
		std::cout<<aux->cadena<<' ';
		aux=aux->siguiente;
	}
	std::cout<<"\nfin de la impresi�n"<<std::endl;
}

Lista& vaciar(Lista& list){
	if(list.frente!=nullptr){
		std::cout<<"Eliminando elemento: "<<list.frente->cadena<<'\n';
		list.frente=list.frente->siguiente;
		list.cantidadElementos--;
		if(list.frente==nullptr)
				std::cout<<"Lista vac�a."<<'\n';
		vaciar(list);
	}
	//std::cout<<"Lista vac�a."<<'\n';//Repite la oraci�n tantas veces como elementos eliminados, por que?
	return list;
}

