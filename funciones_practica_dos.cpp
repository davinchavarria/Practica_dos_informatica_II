#include "funciones_practica_dos.h"

int total(int letra,int *letras){
    for (int i = 65, j = 0; i < 91, j < 26; i++, j++){
        if (letra == i){
            *(letras+j) = *(letras+j)+1;
        }
    }
    return 0;
}
int transmutador_txt_int(char *valor){
    int multiplo = 10, entero = 0;
    for(int i =2; valor[i] != '\0';  i++){
        multiplo*= 10;// funcion expecial para tener el tamaño en unidades de cadena
    }
    for(int i= 0 ; valor[i] != '\0';i++){// sacamos digito a digito
        for(int j= 48,contador=0;j <= 57;j++,contador++){
            if(valor[i]==j){//  multiplo decrecera en multiplos de 10 concorde a unidades del digito
                entero += contador*multiplo;
                multiplo/=10;// sumamos y hacemos conversion en numero y contador
            }
        }
    }
    return entero;
}
int sumaDivisores(int num){//Suma los divisores de un numero dado
    int suma = 0;
    for(int i = 1; i < num; i++){
        if(num % i == 0){
            suma = suma + i;
        }
    }
    return suma;
}

bool buscaNumero(int *grupo, int b){//recibe un puntero y un numero entero
    int tamano = sizeof(grupo);//miramosel tamaño de la lista
    for(int i = 0; i < tamano; i++){// iteramos entre el tamaño de la lista para encontrar a b
        if(grupo[i] == b){
            return true;//retornamos que si esta en la lista
        }
    }
    return false;//sino retornamos falso
}

void rectan_C(int recA[], int recB[]){
    int *ptrC = recC;
    int x = 0; // Coordenadas en el eje x.
    int y = 0; // Coordenadas en el eje y.
    int b = 0; // Base del rectangulo.
    int h = 0; // Altura del rectangulo.

    for(int i = 0; i < 4; i++){
        if(i == 0){
            x = recA[i] + recB[i];
            *ptrC = x;
        }
        else if(i == 1){
            y = recA[i] + recB[i];
            *(ptrC + i) = y;
        }
        else if(i == 2){
            h = recA[i] - recB[i];
            if(h < 0){
                h = h * (-1);
            }
            *((ptrC + i) + 1) = h;
        }
        else if(i == 3){
            b = recA[i] - recB[i];
            if(b < 0){
                b = b * (-1);
            }
            *((ptrC + i) - 1) = b;
        }
    }
}
void separadorDigitos(int num, int arreglo[]){
    int divisor = 1000;
    int digito = 0;
    int resto = num;
    int *ptr = arreglo;

    for(int i = 0; resto > 0; i++){
        digito = resto / divisor;
        resto = resto % divisor;
        divisor = divisor / 10;
        *ptr = digito;
        ptr++;
    }

}
