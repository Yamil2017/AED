#pragma once



struct secuencia {

	secuencia(int);
	~secuencia();
	void agregarElemento(int);
	void imprimirSecuencia();
	
private:
	int cantidad, contador, *sec;
};

