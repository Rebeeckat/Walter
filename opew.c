#include <stdio.h>

int n1 = 10;
int n2 = 3;

int suma();
int resta();
int multi();
float divi();

void main(){
    printf("%d + %d = %d", n1, n2, suma());
}
int suma(){
    return n1+n2;
}
void main(){
    printf("%d + %d = %f", n1, n2, divi());
}
float divi(){
    return n1/(float)n2; //casting explicito
}