/*Girón Knepp Hanna Sofía
Tarea 2 arreglos 3
Escribir un diagrama de flujo tal que dado como entrada un arreglo unidimensional de enteros, determinar cu ́antos de ellos son positivos, negativos o nulos.*/

#include <stdio.h>

int main() 
{
    int n;
    
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    
    int arreglo[n];
    int positivos = 0, negativos = 0, nulos = 0;
    
    printf("Ingrese %d números enteros:\n", n);
    for(int i = 0; i < n; i++) 
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    for(int i = 0; i < n; i++) 
    {
        if(arreglo[i] > 0) 
        {
            positivos++;
        } 
        else if(arreglo[i] < 0) 
        {
            negativos++;
        } 
        else 
        {
            nulos++;
        }
    }

    printf("Números positivos: %d\n", positivos);
    printf("Números negativos: %d\n", negativos);
    printf("Números nulos: %d\n", nulos);
    
    return 0;
}
