#include <iostream>
#include "funciones_practica_dos.h"
#include <cstdlib>
#include <time.h>
using namespace std;

/*
Problema 2.
Elabore un programa que genere un arreglo de 200 letras mayúsculas aleatorias,
imprima este arregloy luego imprima cuantas veces se repite cada letra en el arreglo.
Ejemplo: supóngase que se genera el arreglo de 10 elementos: ABARSECAAB.
El programa debe imprimir: ABARSECAAB
A: 4
B: 2
C: 1
Y así sucesivamente.
*/

int main()
{
    int hora = time(NULL);
    //arreglo que tendra la cantidad de letras repetidas
    int letras[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int arreglo[200];//arreglo donde iran las letras mayusculas aleatorias

    //creamos el arreglo aleatrorio de 26 posiciones
    for (int i = 0; i < 200; i++){//recorremos el arreglo para rellenar sus posiciones con letras aleatorias
        arreglo[i]= 'A' + (rand()%hora)%26;//Utilizando la hora para dar un numero aleatorio que representaria una letra mayuscula aleatoria
        total(arreglo[i], &letras[0]);
    }

    cout<<"El arreglo es: "<<endl;
    cout<<"{";
    for (int i = 0; i < 200; i++){//imprimimos el arreglo aleatrorio
        if (i == 199){
            cout<<char(arreglo[i])<<" }"<<endl;
        }
        else {
            cout<<char(arreglo[i])<<", ";
        }
    }
    for (int i = 0; i<26; i++){
        cout<<char(65+i)<<": "<<letras[i]<<endl;
    }
    return 0 ;
}

