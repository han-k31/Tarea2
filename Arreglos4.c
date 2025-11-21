/*Girón Knepp Hanna Sofía
Tarea 2 arreglo 4
Construir un diagrama de flujo para almacenar en un arreglo unidimen-
sional los 100 primeros n ́umeros pares. Imprimir al final el arreglo.*/

#include <stdio.h>

int main() 
{
    int pares[100];
    int i;
    
    for(i = 0; i < 100; i++) 
    {
        pares[i] = i * 2;
    }
    
    printf("Los 100 primeros números pares son:\n");
    for(i = 0; i < 100; i++) 
    {
        printf("%d ", pares[i]);
    }
    
    return 0;
}
