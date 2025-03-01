//Suma de los cuadrados de los primeros n números:
//Escribe un programa que calcule la suma de los cuadrados 
//de los primeros n números naturales. 
//Usa una función para obtener la suma
#include <stdio.h>

int scuadrados(int n){
    int suma = 0;
    for (int i = 1; i<=n; i++){
        suma += i*i;
    }
    return suma;
}
int main(){
    int n;
    printf("Introduce un numero: ");
    scanf("%d", &n);
    printf("La suma de los cuadrados de los primeros %d numeros naturales es de: %d\n", scuadrados(n));
}