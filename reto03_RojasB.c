
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
int *ptr;// Declaracion de puntero 
ptr=malloc(15*sizeof(*ptr)); // espacio de memoria para el puntero 
/*a block of 15 integers*/

if(ptr!= NULL){//verificar si es distinto de nulo
*(ptr+5)=480; /*assign 480 to sixth integer*/
}
printf("Cadena copiada\n");// mensjae 
free(ptr);//libera memoria 
return 0; 
}

