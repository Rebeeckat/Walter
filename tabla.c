#include <stdio.h>
void tabladel5(){
    int tabla = 5; //int es un tipo de dato
    int prod = 0; //(el 0 es para que no afecte la suma) En C es buena practica inicializar las variables
    short int contador = 1; //short es un modificador de tipo de dato
    prod = tabla * contador;
    printf ("%d * %d = %d\n"tabla,contador,prod);
    contador = contador + 1;
    prod = tabla * contador;
    printf("%d * %d = %d\n", tabla,contador,prod);
     
}