#include<iostream>

#include "Stack.h"

Pila& vaciar(Pila& stack){
	if(!isEmpty(stack)){
		pop(stack);
		vaciar(stack);
	}else
		std::cout<<"Pila vacía"<<std::endl;
	return stack;
}

Pila::Pila(int a):TAMANIO{a},contador{}{
	top=new int[TAMANIO];
}

bool isEmpty(const Pila& stack){
	return (stack.contador==0)?true:false;
}

Pila& pop(Pila& stack){
	if(stack.contador>=1){
		//std::cout<<"Elemento "<<stack.top[stack.contador-1]<<" eliminado"<<std::endl;
		stack.contador--;
	}
	else
		std::cout<<"La pila está vacía"<<std::endl;
	return stack;
}

Pila& push(Pila& stack,int valor){
	if(stack.contador<stack.TAMANIO){
		stack.top[stack.contador]=valor;
		stack.contador++;
		//std::cout<<"El elemento "<<valor<<" ha sido ingresado."<<std::endl;
	}else
		std::cout<<"Pila completa\n";
	return stack;
}

void impresion(const Pila& stack){
	for(int i=stack.contador-1;i>=0;i--)
		std::cout<<stack.top[i]<<" ";
	std::cout<<"\nimpresión finalizada."<<std::endl;
}

int top(const Pila& stack){
	if(isEmpty(stack)){
		//std::cout<<"Pila vacía, cantidad de elementos dentro de la pila: ";
		return 0;
		return stack.top[stack.contador-1];}
	else{
		//std::cout<<"Cima de la pila: ";
		return stack.top[stack.contador-1];
	}

}
