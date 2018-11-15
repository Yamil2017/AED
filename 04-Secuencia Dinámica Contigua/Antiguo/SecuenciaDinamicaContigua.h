#pragma once

#include<array>

const size_t TAMANIO=7;

class SecDinCont{
	int elementos;
	std::array<int, TAMANIO>secuencia;

public:
	SecDinCont();
	void insertarElemento(int);
	void eliminarElemento();
	void eliminarElemento(int);
	void buscarElemento(int);
	void imprimirElemento();
};