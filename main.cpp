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



int main ()
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
*/

/*
Problema 4.
Haga una función que reciba una cadena de caracteres numéricos, la convierta a un número entero
y retorne dicho número. Escriba un programa de prueba.

Ejemplo: si recibe la cadena “123”, debe retornar un int con valor 123.
*/
/*
int main(){
    char valor[100];// cadena caracteres a convertir
    cout<<" Ingresa En STRING tu VALOR : ";cin>> valor;// ciclo que itera hasta valor nulo

    cout<<" El Valor Fue Convertido A Entero : "<< transmutador_txt_int(valor)<<endl;

    return 0;
}
*/

/*
Problema 6.
Escriba un programa que reciba una cadena de caracteres y cambie las letras minúsculas por
mayúsculas, los demás caracteres no deben ser alterados.

Ejemplo: se recibe Man-zana debe mostrar MAN-ZANA.
Nota: la salida del programa debe ser: Original: Man-zana. En mayuscula: MAN-ZANA.
*/
/*
int main(){
char palabra[100];
    cout << "Ingrese Palabra: ";cin >> palabra;
    for (int i = 0; palabra[i] != '\0'; i++) {//iterar hasta valor nulo
        if (palabra[i] <= 122 and palabra[i] >= 97) {//rango encontrar minusculas
            palabra[i] -= 32;
        }
    }
    cout << endl << "\nAll Palabras Mayusculas: " << palabra << endl;
    return 0;
}
*/

/*
Problema 8. Escriba un programa que reciba una cadena de caracteres y separe los números del resto de caracteres,
generando una cadena que no tiene números y otra con los números que había en la cadena original.

Ejemplo: Si se recibe abc54rst el programa debe imprimir las cadenas: abcrst y 54.
Nota: la salida del programa debe ser:
Original: abc54rst.
Texto: abcrst. Numero: 54.
*/
/*
int main(){
char palabra[25]; char pal2[25] ;char num[25];
    cout << "Ingrese Palabra: ";cin >> palabra;
    cout<<"original: "<<palabra;
    for (int i = 0, ip=0,in=0; palabra[i] != '\0'; i++) {// iterar hasta valor nulo
        if (palabra[i] > 65 and  palabra[i] < 122) {// rango determinar si es letra
            pal2[ip] = palabra[i];ip++;
        }else if (palabra[i]> 47 and 58>palabra[i]){// rango sis es numero
            num[in]= palabra[i];in++;
        }
    }
    cout << endl << "\nSolo Texto : " << pal2 <<"\nNumeros : "<<num<<endl;
    return 0;
}
*/
/*
Problema 10.
Escribir un programa que permita convertir un número en el sistema romano al sistema arábigo
usado actualmente. A continuación se encuentran los caracteres usados en el sistema romano y su equivalente ará-
bigo:

M: 1000
D: 500
C: 100
L: 50
X: 10
V: 5
I: 1

Los números romanos se forman usando estos caracteres en base a dos reglas:
Si un carácter esta seguido por uno de igual o menor valor, su valor se suma al total.
Si un carácter esta seguido por uno de mayor valor, su valor se resta del total.

Ejemplo: CC=200, CD=400, DC=600, DCLXVI=666, CLXXIV=174.
Nota: la salida del programa debe ser:
El número ingresado fue: DCLXVI
Que corresponde a: 666.
*/
/*
int main(){
    bool flag = false;int valor =0;
    char NumerosRomanos[7] = { 'M','D','C','L','X','V','I' };string numrom;
    int NumerosArabes[7] = { 1000,500,100,50,10,5,1 };
    cout<<"Ingresa Numero En Romano\n";cin>>numrom;

    for(int i = 0; numrom[i]!= '\0';i++){// iteramos hasta valor nulo de la cadena
        for(int ii = 0 ; NumerosRomanos[ii] != '\0'; ii++){// itera sobre valores romanos
            if(numrom[i]==NumerosRomanos[ii]){//comprobamos si el cada caractes es valido
                valor += NumerosArabes[ii];
                flag=true;
            }// si el caracter no es valido ingresar cadena nuevamente , contador se reinicia en 0
        }if(flag==false){
            cout<<" Numero No Valido Ingrsa Nuevamente : ";cin>> numrom;i=-1;
        }
    }
    cout<< " Su Numero Romano : "<< numrom << " Es Igual a "<<valor <<" En Numero Romano"<<endl;
    return 0;
}
*/
/*
Problema 12. Un cuadrado mágico es una matriz de números enteros sin repetir, en la que la suma de los números
en cada columna, cada fila y cada diagonal principal tienen como resultado la misma constante. Escriba un programa
que permita al usuario ingresar una matriz cuadrada, imprima la matriz y verifique si la matriz es un cuadrado
mágico.

Nota: un ejemplo de cuadrado mágico es el siguiente:
 -----
|4|9|2|
|-----|
|3|5|7|
|-----|
|8|1|6|
 -----
*/
bool valDupli(int arr[], int n) {// comprobar valotres repetidos
    bool iguales = true;
    for(int i = 0; i < n-1; i++) {
        if(arr[i] != arr[i+1]) {
            iguales = false;
            break;
        }
    }
    if(iguales) {
        return true;
    }
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n ;cout<<" Ingresa El Orden DE Tu Matriz nXn:  ";cin>> n;
    int list[n*n];
    bool bandera = true;
    int matriz[n][n];
    int valoresfcd[(n*n)-1];
    int cont = 0,d1=0,d2=0;
    cout<< " Ingresa FILA A FILA  Tu Matriz (separados por espacios) \n";
    for(int i = 0,ii=0; i < n;i++){//ingresamos fila a fila
        cout<< " Ingresa Fila "<<i+1<< " : " ;
        for(int j = 0 ; j < n ; j++){
            cin>>matriz[i][j];
            if( bandera){
                for(int c =0; list[c] <n*n;c++){// cclo de valores ingresados
                    if(matriz[i][j]== list[c]){// si el digito ya fue ingresado no dentra a siguiente filtro
                        bandera = false;
                    }
                }
            }list[ii]=matriz[i][j];ii++;
        }
    }
        for(int i = 0; i < n;i++){cout<<endl;// imprimis la matriz para dar imagen por consola
        for(int j = 0 ; j < n ; j++){
            cout<<matriz[i][j]<<" ";
        }
    }
    if(bandera){
        for(int fila=0 ,valorf; fila < n  ;fila++){// filtro para filas
            valorf=0;
            for(int colum = 0 ; colum < n ; colum++){
                valorf += matriz[fila][colum];
            }
            valoresfcd[cont]=valorf;// valores de filas se agregan
            cout<<endl<<"valor fila "<<valorf;
            cont++;
        }cout<<endl;
        for(int colum = 0 , valorc ; colum< n  ; colum++){// filtro para columnas
            valorc=0;
            for(int fila= 0; fila<n ; fila++){
                valorc+= matriz[fila][colum];
            }
            valoresfcd[cont]= valorc;// valores de columnas se agregan
            cout<< valorc<< " valor columna\n";cont++;

    }

    cout<< endl<<endl;
    for(int base1 =0, base2 = n-1; base1 <= (n*n)-1; base1+=n+1,base2+= (n-1)){// sumamos las diagonales
        d1+=list[base1];
        d2+=list[base2];
    }
    valoresfcd[cont]=d1; valoresfcd[++cont]=d2;
    if(valDupli(valoresfcd,cont)){// comprobamos que las sumas de valores de filas , colum , diagomales sean ==
        cout<<" cuadrado magico";
    }else{
        cout<<"No es Cuadrado Magico";
    }

    }
    else{
        cout<<"No es Cuadrado Magic1o";
    }

}
