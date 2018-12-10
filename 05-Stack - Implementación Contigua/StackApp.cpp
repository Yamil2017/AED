#include "Stack.h"
#include<cstring>
#include<iostream>
using namespace std;

//PROTOTIPOS
bool analizador (Pila &stack, char palabra[20]);
int atoi (char palabra);
//FIN PROTOTIPOS


int main(){

    cout<< " Es palindromo? "<<endl;
    cout<< " Ingrese palabra: ";
    char palabra [20];
    cin >> palabra;


    Pila stack(strlen(palabra));

    if(analizador(stack,palabra) == true){
        cout << "\n*** Es palindromo! ***\n"<< endl;
    }else{
        cout << "\n*** No es palindromo! ***\n"<< endl;
    }
    vaciar(stack);
    return 0;
}

//funciones

bool analizador (Pila &stack,char palabra[20]){

    for (int i = 0; i < strlen(palabra); ++i)
        push(stack,palabra[i]);

    int c = top(stack);

    for (int j = 0; j < strlen(palabra); ++j) {
       if (c != atoi(palabra[j]))
            return false;
    pop(stack);
    c = top(stack);}

    return true;
}

int atoi (char palabra){
    int valor = palabra;
    return valor;
}

