#pragma once

template<typename T,int,int>
struct Matriz {
	int nFilas, nColumnas;
	T*matriz;

	Matriz();
	~Matriz();
};

template<typename T,int filas,int columnas>
Matriz<T,filas,columnas>::~Matriz() {
	delete[] matriz;
}
/*
template<typename T>
Matriz<T>::Matriz(int a) : nFilas{ a }, nColumnas{ a }{
	matriz = new T[nColumnas*nFilas];
}
*/
template<typename T,int filas,int columnas>
Matriz<T,filas,columnas>::Matriz() : nFilas{ filas }, nColumnas{ columnas }{
	matriz = new T[nColumnas*nFilas];
}

template<typename T,int filas,int columnas>
Matriz<T,filas,columnas>& set(Matriz<T,filas,columnas>& matrix, T valor, int fila, int columna) {
	short int elemento = (fila - 1)*matrix.nColumnas + columna - 1;
	matrix.matriz[elemento] = valor;
	return matrix;
}

template<typename T,int filas,int columnas>
void print(const Matriz<T,filas,columnas>& matrix) {
	std::cout << std::setw(5) << "row\\col";
	for (int i = 1; i <= matrix.nColumnas; ++i)
		std::cout << std::setw(4) << '[' << i << ']';
	for (int i = 0; i < matrix.nFilas; i++) {
		std::cout << '\n';
		std::cout << std::setw(5) << '[' << i + 1<<']';
		for (int j = 0; j < matrix.nColumnas; j++)
			std::cout <<std::setw(5)<< matrix.matriz[j+matrix.nColumnas*i]<<' ';
	}
	std::cout << "\nFin de la impresion." << std::endl;
}

template<typename T,int filas,int columnas>
T& get(const Matriz<T,filas,columnas>& matrix, int fila, int columna) {
	short int elemento = (fila - 1)*matrix.nColumnas + columna - 1;
	return matrix.matriz[elemento];
}

