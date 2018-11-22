#ifndef SECDIN_H
#define SECDIN_H

class Lista {
	friend Lista& set(Lista&,int, int);
	friend bool isEmpty(const Lista&);
	friend void print(const Lista&);
	friend int get(const Lista&, int);
	friend int tamanio(const Lista&);
public:
	Lista();
	Lista(int);
	~Lista();
private:
	int cantidadElementos,ingresados;
	int* arreglo;
};

#endif