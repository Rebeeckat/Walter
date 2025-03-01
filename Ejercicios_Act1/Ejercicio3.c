//Suma de los dígitos de un número:
//Escribe un programa que calcule la suma de los dígitos de un número entero.
//Usa una función para obtener la suma
#include <stdio.h>

int sumaDigitos(int n){
    int suma = 0;
    while (n > 0){
        suma += n % 10; // Significa que se extrae el ultimo numero
        n /= 10; // esto elimina ultimo numero
    }
    return suma;
}
int main(){
    int n;
    printf("Introduce un numero entero: ");
    scanf("%d", &n);
    int resultado = sumaDigitos(n);
    printf("La suma de los digitos del numero %d es de: %d\n", n, sumaDigitos(n));
}
