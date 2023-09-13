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
/*
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
*/
/*
Problema 14. Elabore un programa que llene una matriz 5x5 con los números del 1 al 25 y la imprima, luego
imprima la matriz rotada 90, 180 y 270 grados.
*/
/*
void rotar(int matriz[5][5],int matrizrotar[5][5]){// funcion para rotar matriz 90 grados
    for(int i = 4,io=0,val=1;i>=0; i--,io++){
        for(int j= 0,jo=0;j<5; j++,jo++){
            matrizrotar[j][i]=matriz[io][jo];// escribir desde la ultima columna hasta la 1
        }
    }for(int i = 0;i<5; i++){cout<<endl;// se imprime la matriz rotada
        for(int j= 0;j<5; j++){
            cout<<matrizrotar[i][j]<<" ";
        }
    }cout<<endl;
}
int main(){
 int matriz[5][5];int matriz9[5][5];
 int matriz18[5][5];int matriz27[5][5];
 for(int i = 0,val=1;i<5; i++){// creamos matriz origina con valores de 1-25 en orden
  for(int j= 0;j<5; j++){
   matriz[i][j]=val;val++;
  }
 }for(int i = 0;i<5; i++){cout<<endl;// se imprime matriz origin
        for(int j= 0;j<5; j++){
            cout<<matriz[i][j]<<" ";
        }
    }cout<<endl;
 rotar(matriz,matriz9); rotar(matriz9,matriz18); rotar(matriz18,matriz27);
}
*/
/*
Problema 15.
Ejemplo: Si se ingresan los rectángulos A y B representados por los arreglos {0, 0, 8, 4} y {5, 2, 6, 7}, el rectángulo
intersección C debe ser el arreglo {5, 2, 3, 2}.
*/

/*
int recC[4];

int main(){
    int recA[4];
    int recB[4];
    int numA = 0;
    int numB = 0;
    cout << "Ingrese un numero de 4 digitos con los datos del rectangulo 1: ";
    cin>>numA;
    cout << "Ingrese un numero de 4 digitos con los datos del rectangulo 2: ";
    cin>>numB;

    separadorDigitos(numA, recA);
    separadorDigitos(numB, recB);
    cout << "El rectangulo interseccion C es: ";
    rectan_C(recA, recB);

    for(int i = 0; i < 4; i++){
        cout << recC[i];
    }
    cout << endl;


    return 0;
}

*/

/*
Problema 16.
En una malla de 2x2, realizando únicamente movimientos hacia la derecha y hacia abajo hay 6
posibles caminos para llegar de la esquina superior izquierda a la inferior derecha como se observa en la Figura 7.

Escriba un programa que reciba un numero n y calcule el número de caminos posibles en una cuadricula de nxn.
Nota: la salida del programa debe ser:
Para una malla de 2x2 puntos hay 6 caminos.
*/
/*
int main(){
    int ValorLados,fac1=1,fac2=1;
    cout<<"Ingrese  Valor De la matriz nXn:  ";cin>>ValorLados;
    for(int i = 1; i <= ValorLados*2; i++){//utilizamos formula que se basa en los lados fac1/fac2
        fac1 *=i;// formula se basa en calcula factoriales fac1 = (lado + lado )!
        if(i<=ValorLados){
            fac2*=(i*i) ;//fac2 = lado!*lado!
        }
    }cout<<"Para una malla de "<<ValorLados<<" x "<<ValorLados<<" puntos hay "<<fac1/fac2<<" caminos."<<endl;
}
*/

/*
Problema 17. Dos números a y b (a != b) son amigables si la suma de los divisores de a (excluyéndose el mismo)
es igual a b, y viceversa. Ej: los divisores de 220 son 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 y 110; y suman 284. Los divisores
de 284 son 1, 2, 4, 71 y 142; y suman 220. Entonces 220 y 284 son amigables. Escribir un programa que reciba un
número y halle la suma de todos los números amigables menores al número ingresado.
Nota: la salida del programa debe ser:
El resultado de la suma es: 504.
*/
/*
int grupo_n[] = {};

int main()
{
    int num = 1184;
    cout << "Ingrese numero: "; cin >> num;
    int contador = 1;
    int b = 1;
    int suma = 0;
    int posicion = 0;


    for(int a = 1; a <= num; a++){
        b = sumaDivisores(a);
        if(sumaDivisores(b) == a){
            if(a != b){
                if(buscaNumero(grupo_n, b) == false){
                    contador++;
                    //cout << "Numeros amigables: " << a << endl;
                    //cout << "Numeros amigables: " << b << endl;
                    suma = suma + a + b;
                    grupo_n[posicion] = a;
                    posicion++;
                    grupo_n[posicion] = b;
                    posicion++;
                }
            }
        }
    }

    cout << "La suma de los  numeros amigables: " << suma << endl;

    return 0;
}
*/


/*
Problema 18.
Las permutaciones lexicográficas son permutaciones ordenadas numérica o alfabéticamente, por
ejemplo las permutaciones lexicográficas de 0,1 y 2 son: 012, 021, 102, 120, 201, 210. Escribir un programa que
reciba un número n y halle la enésima permutación lexicográfica de los números entre 0 y 9.

Ejemplo: para n= 1000000, la permutación lexicográfica es 2783915460.
Nota: la salida del programa debe ser:
La permutacion numero 1000000 es: 2783915460.
*/
/*
int main(){
    char list[10]={'0','1','2','3','4','5','6','7','8','9'};
    int list2[8]={362880,40320,5040,720,120,24,6,2};
    int numero;
    cout << "Ingresa tu numero" << endl;cin >> numero;//en el siguiente ciclo apartid de las permutaciones de cada indice calculamos indice a indice
    for(int i = 0, digito; i < 8; i++){//cada indice tiene cierta permutacion dependiendo del factorial de la pocision
        digito = numero / list2[i];//lo que hago es ir aproximando digito a digito hasta aproximar 8 pocisiones
        numero = numero - ((list2[i])*digito);
        if(numero == 0){
            digito = digito - 1;
        }cout << list[digito];
        for(int j = digito; j < 9; j++){
            list[j] = list[j+1];
        }list[9]='\0';
    }
     // Imprimir valores restantes
    if (numero == 1) {
        for (int i = 0; i < 9; i++) {
            cout << list[i];
        }
    } else if (numero == 0) {
        for (int i = 8; i >= 0; i--) {
            cout << list[i];
        }
    }
    return 0;
}
*/
