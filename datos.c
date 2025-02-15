#include <stdio.h>
//C es un lenguaje tipado, es decir, se debe aclarar el tipo de dato siempre
void main(){ //ambito o scape de variables/ funciones
    int numero_1; //iniciacion de variable sin asigncion de valor
    int numero_2 = 5; // con asignacion de valor, el valor debe ser similar al tipo de lenguajes que estoy utilizando
    printf("%d", numero_1*numero_2); //Esto es una interpoblacion de cadenas
}

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