/*
Aplicaci�n para asistencia en atenci�n a Cliente por orden de llegada. El cliente saca turno por pantalla en
mesa de entrada y le es asignado un n�mero. La persona a cargo de la atenci�n comunica a los clientes, a trav�s de
una pantalla frente a la sala de espera, el n�mero a atender para que el cliente que corresponda pase al sector
 de atenci�n.
*/
#include<iostream>
#include"Queue.h"

int main(){

/*****C�digo para terminal de CLientes*****/
	Cola turnos;
	short opcion{},opcionEmpleado{};int turno{},turnosTomados{};
	bool bandera=true;//booleano para prueba
	while(bandera==true){//condicional para prueba
	std::cout<<"Escoja una opci�n: \n1 : Sacar turno.\n2: Consultar cantidad de personas delante."<<std::endl;
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
		std::cout<<"Selecci�n inv�lida."<<std::endl;
		bandera=false;
	}}
/*****fin Clientes*****/
	bandera=true;

/*****C�digo para terminal de Empleado de Atenci�n*****/
	while(bandera==true){//condicional para prueba
	std::cout<<"1: Hacer pasar pr�ximo cliente para atenci�n.\n2: Consultar clientes restantes.";
	std::cin>>opcionEmpleado;
	switch(opcionEmpleado){
	case 1:{
		if(isEmpty(turnos))
			std::cout<<"No hay clientes en espera."<<std::endl;//Sale por terminal de Empleado
		else{
			dequeue(turnos,turno);
			std::cout<<"N�mero "<<turno<<" pase a ser atendido por favor."<<std::endl;//Sale por pantalla
		};																				//de sala de espera
		break;}
	case 2:
		std::cout<<"Hay "<<turnosTomados-turnos.frente->dato+1<<" personas por atender."<<std::endl;
		break;
	default:
		std::cout<<"Selecci�n inv�lida."<<std::endl;
		bandera=false;
	}	}

/*****Fin de c�digo para Empleado de Atenci�n*****/


		return 0;
}
