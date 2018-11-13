#ifndef TEMPLATE_H
#define TEMPLATE_H

template<typename T>
struct Matriz {
	int nFilas,nColumnas;
	T*matriz;
	
	Matriz();
	Matriz(int);
	Matriz(int, int);
	~Matriz();
};

template<typename T>
Matriz<T>::~Matriz() {
	delete[] matriz;
}

template<typename T>
Matriz<T>::Matriz() : nFilas{ 2 }, nColumnas{ 2 }{
	matriz = new T[nColumnas*nFilas];
}

template<typename T>
Matriz<T>::Matriz(int a) : nFilas{ a }, nColumnas{ a }{
	matriz = new T[nColumnas*nFilas];
}

template<typename T>
Matriz<T>::Matriz(int fila, int columna) : nFilas{ fila }, nColumnas{ columna }{
	matriz = new T[nColumnas*nFilas];
}

template<typename T>
Matriz<T>& set(Matriz<T>& matrix, T valor, int fila, int columna) {
	short int elemento = (fila - 1)*matrix.nColumnas + columna - 1 ;
	matrix.matriz[elemento] = valor;
	return matrix;
}

template<typename T>
void print(const Matriz<T>& matrix) {
	for (int i=0;i<matrix.nColumnas*matrix.nFilas;i++)
		std::cout << matrix.matriz[i] << " ";
	std::cout << "\nFin de la impresion." << std::endl;
}

template<typename T>
T& get(const Matriz<T>& matrix, int fila, int columna) {
	short int elemento = (fila - 1)*matrix.nColumnas + columna - 1;
	return matrix.matriz[elemento];
}

#endif
