/* Girón Knepp Hanna Sofía
Tarea 2 arreglo 2
construya un programa tal que dado como entrada un arreglo unidimen-
sional de enteros y un n ́umero entero, determine cu ́antas veces se encuentra
el n ́umero dentro del arreglo.*/

#include <stdio.h>

int cont(int arreglo[], int largo, int numero) 
{
    int contador = 0;
    
    for(int i = 0; i < largo; i++) 
    {
        if(arreglo[i] == numero) 
        {
            contador++;
        }
    }
    
    return contador;
}

int main() 
{
    int arreglo[] = {1, 6, 9, 2, 5, 5, 2, 8, 7, 2};
    int tamaño = 10;
    int numero;
    
    printf("Arreglo: ");
    for(int i = 0; i < tamaño; i++) 
    {
        printf("%d ", arreglo[i]);
    }

    printf("\nIngrese el número a buscar: ");
    scanf("%d", &numero);
    
    int lim = cont(arreglo, tamaño, numero);
    
    printf("\nEl número %d aparece %d veces en el arreglo", numero, lim);
    
    return 0;
}
