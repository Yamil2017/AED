/*
Aplicación para asistencia en atención a Cliente por orden de llegada. El cliente saca turno por pantalla en
mesa de entrada y le es asignado un número. La persona a cargo de la atención comunica a los clientes, a través de
una pantalla frente a la sala de espera, el número a atender para que el cliente que corresponda pase al sector
 de atención.
*/
#include<iostream>
#include"Queue.h"

int main(){

/*****Código para terminal de CLientes*****/
	Cola turnos;
	short opcion{},opcionEmpleado{};int turno{},turnosTomados{};
	bool bandera=true;//booleano para prueba
	while(bandera==true){//condicional para prueba
	std::cout<<"Escoja una opción: \n1 : Sacar turno.\n2: Consultar cantidad de personas delante."<<std::endl;
	std::cin>>opcion;
	switch(opcion){
	case 1:
		turnosTomados++;
		enqueue(turnos,turnosTomados);
		break;
	case 2:
		std::cout<<"Se encuentran "<<turnosTomados<<" personas delante."<<std::endl;
		break;
	default:
		std::cout<<"Selección inválida."<<std::endl;
		bandera=false;
	}}
/*****fin Clientes*****/
	bandera=true;

/*****Código para terminal de Empleado de Atención*****/
	while(bandera==true){//condicional para prueba
	std::cout<<"1: Hacer pasar próximo cliente para atención.\n2: Consultar clientes restantes.";
	std::cin>>opcionEmpleado;
	switch(opcionEmpleado){
	case 1:{
		if(isEmpty(turnos))
			std::cout<<"No hay clientes en espera."<<std::endl;//Sale por terminal de Empleado
		else{
			dequeue(turnos,turno);
			std::cout<<"Número "<<turno<<" pase a ser atendido por favor."<<std::endl;//Sale por pantalla
		};																				//de sala de espera
		break;}
	case 2:
		std::cout<<"Hay "<<turnosTomados-turnos.frente->dato+1<<" personas por atender."<<std::endl;
		break;
	default:
		std::cout<<"Selección inválida."<<std::endl;
		bandera=false;
	}	}

/*****Fin de código para Empleado de Atención*****/


		return 0;
}
