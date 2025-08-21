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
      
    char *q = NULL;       // Inicialización de un puntero a NULL
    printf("Requesting space for \"Goodbye\"\n");//imprime mensaje

    // Reservar memoria dinámica para q 
    q = (char *) malloc(100 * sizeof(char));  // espacio para la cadena de q

    if(!q){//validar de reserva memoria 
perror("Falla al reservar memoria");
exit(0);}


        // Imprime copia
        printf("About to copy \"Goodbye\" to q\n");
        strcpy(q, "Goodbye");
        printf("String copied\n");
        printf("%s\n", q);

        // Liberar la memoria reservada
        free(q);

        return 0;
    }
