#include "funciones_practica_dos.h"

int total(int letra,int *letras){
    for (int i = 65, j = 0; i < 91, j < 26; i++, j++){
        if (letra == i){
            *(letras+j) = *(letras+j)+1;
        }
    }
    return 0;
}


