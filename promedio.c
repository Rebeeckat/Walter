//Gestión de Calificaciones de Estudiantes en una Institución Educativa

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ESTUDIANTES 5
#define MATERIAS 4
#define CALIFICACIOON 6


int generarCalificacion() {
    return rand() % 6 + 5;
}

int main() {
    srand(time(NULL));
    
    char *materias[MATERIAS] = {"Matemáticas", "Física", "Química", "Historia"};
    char *estudiantes[ESTUDIANTES] = {"Ana", "Luis", "Carlos", "Sofia", "Miguel"};
    int calificaciones[ESTUDIANTES][MATERIAS + 1];
    
    for (int i = 0; i < ESTUDIANTES; i++) {
        calificaciones[i][0] = i + 1;
        for (int j = 1; j <= MATERIAS; j++) {
            calificaciones[i][j] = generarCalificacion();
        }
    }
    
    float promedioMateria[MATERIAS] = {0};
    for (int j = 0; j < MATERIAS; j++) {
        float suma = 0;
        for (int i = 0; i < ESTUDIANTES; i++) {
            suma += calificaciones[i][j + 1];
        }
        promedioMateria[j] = suma / ESTUDIANTES;
    }
    
    float promedioEstudiante[ESTUDIANTES] = {0};
    int mejorEstudiante = 0;
    float mejorPromedio = 0;
    
    for (int i = 0; i < ESTUDIANTES; i++) {
        float suma = 0;
        for (int j = 1; j <= MATERIAS; j++) {
            suma += calificaciones[i][j];
        }
        promedioEstudiante[i] = suma / MATERIAS;
        
        if (promedioEstudiante[i] > mejorPromedio) {
            mejorPromedio = promedioEstudiante[i];
            mejorEstudiante = i;
        }
    }
    
    int mejorMateria = 0;
    for (int j = 1; j < MATERIAS; j++) {
        if (promedioMateria[j] > promedioMateria[mejorMateria]) {
            mejorMateria = j;
        }
    }
    
    printf("Materias con problemas (promedio < %d):\n", CALIFICACIOON);
    for (int j = 0; j < MATERIAS; j++) {
        if (promedioMateria[j] < CALIFICACIOON) {
            printf("%s con promedio %.2f\n", materias[j], promedioMateria[j]);
        }
    }
    
    printf("\nEstudiantes con problemas:\n");
    for (int i = 0; i < ESTUDIANTES; i++) {
        int reprobado = 0;
        for (int j = 1; j <= MATERIAS; j++) {
            if (calificaciones[i][j] < CALIFICACIOON) {
                reprobado = 1;
                break;
            }
        }
        if (reprobado || promedioEstudiante[i] < CALIFICACIOON) {
            printf("%s con promedio %.2f\n", estudiantes[i], promedioEstudiante[i]);
        }
    }
    
    printf("\nPromedio por materia:\n");
    for (int j = 0; j < MATERIAS; j++) {
        printf("%s: %.2f\n", materias[j], promedioMateria[j]);
    }
    
    printf("\nPromedio por estudiante:\n");
    for (int i = 0; i < ESTUDIANTES; i++) {
        printf("%s: %.2f\n", estudiantes[i], promedioEstudiante[i]);
    }
    
    printf("\nEl mejor estudiante es %s con un promedio de %.2f\n", estudiantes[mejorEstudiante], mejorPromedio);
    printf("La mejor materia es %s con un promedio de %.2f\n", materias[mejorMateria], promedioMateria[mejorMateria]);
    
    return 0;
}
