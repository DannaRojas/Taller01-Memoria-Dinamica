/******************************
Pontificia Universidad Javeriana
 * Fecha: 21 agosto 2025
 * Autor: Danna Gabriela rojas Bernal
 * Materia: Sistemas Operativos
 * Tema: Memoria dinamica
*********************************/

//librerias
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Función principal
int main() {
    int n, i, *ptr, sum = 0;  // Declaración de variables

    printf("Enter number elements: ");//ingreso de datos 
    scanf("%d", &n);

    // Reserva dinámica de memoria con calloc
    ptr = (int*) calloc(n, sizeof(int));
    if (ptr == NULL) {
        printf("Error! memory not allocated.\n"); // Mensaje de error
        exit(0);  // Finaliza el programa si no se asigna memoria
    }

    // Lectura de elementos
    printf("Enter elements: ");
    for (i = 0; i < n; i++) {   // iniciación de bucle
        scanf("%d", ptr + i);   // Lectura del elemento en la posición i
        sum += *(ptr + i);      // Acumula la suma
    }

    // Imprime la suma de los elementos
    printf("Sum = %d\n", sum);

    // Liberar memoria reservada
    free(ptr);

    return 0;
}

