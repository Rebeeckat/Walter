//Producto de los elementos de un arreglo por un escalar, 
//usa una función para obtener el producto:

#include<stdio.h>

void producto(int arr[], int n, int escalar) { // int arr[]: recordatorio: esto es un tipo de arreglo en C para declarar un arreglo de enteros
    for (int i = 0; i < n; i++) arr[i] *= escalar;
}

int main() {
    int n, escalar, arr[10];
    printf("Tamaño: ");
    scanf("%d", &n);
    printf("Elementos: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Escalar: ");
    scanf("%d", &escalar);
    producto(arr, n, escalar);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}

