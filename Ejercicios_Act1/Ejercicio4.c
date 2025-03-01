//Promedio de los elementos de un arreglo:
//Escribe un programa que calcule el promedio de los elementos de un arreglo de enteros.
//Usa una función para obtener el promedio.

#include<stdio.h>

float prom(int arr[], int n){
    float suma = 0;
    for (int i = 0; i < n; i++){
        suma += arr[i];
    }
    return suma/n;
}
int main(){
    int n, arr[10];
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
    printf("Ingrese los elementos: ");
    for (int i = 0; i < n; i++) 
    scanf("%d", &arr[i]);
    printf("Promedio: %.2f\n", prom(arr, n));
    return 0;
} 

