#include <stdio.h>
//void =declarar prototipo

//Void es vacio, int es entero

void imprimiredad1();
void imprimiredad2();

void main(){
    imprimiredad1();
    imprimiredad2();
    int edad = imprimiredad2(); //Asignacion de funcion
    printf("Tienes %d años de edaad\n", edad);
}
void imprimiredad1(){ //tipo de procedimiento/procedures (Funcion tipo void que no va a retornar nada,)
    int a_act = 2025;
    int a_nac = 2006;
    int edad = a_act - a_nac;
    printf("Tienes %d años de edad", edad);
}

int imprimiredad2(){
    int a_act = 2025;
    int a_nac = 2006;
    int edad = a_act - a_nac;
    return edad;
}