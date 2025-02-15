//Escribir un programa que dado el año de nacimiento  y el año
//actual, calcule la edad de una persona.
//Escriba una funcion que imprima la edad
//Escriba otra funcion que la retorne
//use ambas en el programa principal

#include <stdio.h>
//void =declarar prototipo

//Void es vacio, int es entero

void imprimiredad1();
void imprimiredad2();

void main(){
    imprimiredad1();
    imprimiredad2();
}
void imprimiredad1(){ //tipo de procedimiento/procedures (Funcion tipo void que no va a retornar nada,)
    int a_act = 2025;
    int a_nac = 2006;
    int edad = a_act - a_nac;
    printf("Tienes %d años de edad", edad);
}

void imprimiredad2(){

}