#include"SecDin.h"
#include<iostream>
#include<fstream>
#include<string>
//#include<cstdlib>

std::string ingresoNombre();
void ingresoOraciones(Lista&);
void textoDesarrollo(std::ofstream&,const Lista&,const std::string);

int main(){

	std::string nombreArchivo;
	nombreArchivo=ingresoNombre();
	std::ofstream archivo(nombreArchivo);
	//std::ofstream archivo(ingresoNombre()); //Reemplazaría las tres líneas previas, no lo empleo
												//para utilizar nombreArchivo en tercer función
	if(not archivo){
		std::cerr<<"No se logró abrir/crear el archivo";
		exit(EXIT_FAILURE);
	}else
		std::cout<<"Archivo "<<nombreArchivo<<" creado y abierto"<<std::endl;

	Lista nuevo;
	ingresoOraciones(nuevo);
	textoDesarrollo(archivo,nuevo,nombreArchivo);

	return 0;
}

std::string ingresoNombre(){
	std::string a;
	std::cout<<"Ingrese nombre de archivo: ";
	std::cin>>a;
	std::cin.ignore();
	return a;
}

void ingresoOraciones(Lista& secuencia){
	bool bandera=true;
	short oracion{0};
	do{
		std::cout<<"Ingrese "<<oracion+1<<"° oracion a incorporar al archivo de texto.\n\n";
		std::string sentencia;
		getline(std::cin,sentencia);
		std::cout<<sentencia<<'\n';
		set(secuencia,sentencia,oracion);
		std::cout<<get(secuencia,oracion)<<'\n';
		oracion++;
		std::cout<<"Desea agregar una "<<oracion+1<<"° oracion al texto?(s/n):"<<std::endl;
		char cont{'n'};
		std::cin>>cont;
		bandera=(cont=='s' or cont=='S')?true:false;
		std::cin.ignore();
	}while(bandera==true);
}

void textoDesarrollo(std::ofstream& texto,const Lista& list,const std::string name){
	for(int i=0;i<list.cantidadElementos;i++){
		texto<<get(list,i)<<'\n';
	}
	std::cout<<"Archivo de texto "<<name<<" creado e impreso digitalmente";
}
