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

