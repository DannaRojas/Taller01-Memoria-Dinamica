/******************************
Pontificia Universidad Javeriana
 * Fecha: 21 agosto 2025
 * Autor: Danna Gabriela rojas Bernal
 * Materia: Sistemas Operativos
 * Tema: Memoria dinamica
*********************************/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Funcion principal
int main() {
    char *p;              // Declaración de un puntero a char
    char *q = NULL;       // Inicialización de un puntero a NULL

    // Reservar memoria dinámica para p y q
    p = (char *) malloc(100 * sizeof(char));  // espacio para la cadena de p
    q = (char *) malloc(100 * sizeof(char));  // espacio para la cadena de q

    printf("Address of p = %p\n", p); // Se imprime la dirección de memoria de p

    // Copiar la cadena en p
    strcpy(p, "Hello, I'm the best in Operating Systems!!!");
    printf("%s\n", p);
    // Imprime copia
        printf("About to copy \"Goodbye\" to q\n");
        strcpy(q, "Goodbye");
        printf("String copied\n");
        printf("%s\n", q);

        // Liberar la memoria reservada
        free(p);
        free(q);

        return 0;
    }
