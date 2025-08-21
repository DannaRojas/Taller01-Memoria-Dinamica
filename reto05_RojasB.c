/******************************
Pontificia Universidad Javeriana
 * Fecha: 21 agosto 2025
 * Autor: Danna Gabriela Rojas Bernal
 * Materia: Sistemas Operativos
 * Tema: Memoria dinámica
*********************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Función principal
int main() {
    int *ptr, i, n1, n2; // declaración de variables 

    printf("Enter size: ");
    scanf("%d", &n1);

    // asigna espacio de memoria
    ptr = (int*) malloc(n1 * sizeof(int));

    printf("Addresses of previously allocated memory:\n");
    for (i = 0; i < n1; i++)  // bucle 
        printf("p = %p\n", ptr + i);

    printf("\nEnter the new size: ");
    scanf("%d", &n2);

    // redireccionar la memoria
    ptr = realloc(ptr, n2 * sizeof(int));

    printf("Addresses of newly allocated memory:\n");
    for (i = 0; i < n2; i++)
        printf("p = %p\n", ptr + i);// Imprime la nueva direccion de memoria 

    // liberar memoria
    free(ptr);

    return 0;
}
