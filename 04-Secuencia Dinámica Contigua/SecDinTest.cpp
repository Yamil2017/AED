#include<random>
#include<ctime>
#include"SecDin.h"


int main() {

	srand(time(0)); 
	Lista nueva(20);
	for (int i = 0; i < tamanio(nueva); i++)
		set(nueva, i, rand()%49);
	print(nueva);



	system("pause");
	return 0;
}