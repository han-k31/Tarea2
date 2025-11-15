/* Girón Knepp Hanna Sofía
Tarea 2 repetitivas 3
Hacer un diagrama de flujo que calcule la suma de los n ́umeros pares
comprendidos entre el 10 y 50.*/

#include <stdio.h>

int main()
{
  int suma = 0, i = 10;

  for (i; i <= 50; i = i + 2)
  {
    suma = suma + i;
  }
  printf("La suma de los numeros pares entre 10 y 50 es: %d\n", suma);
  
  return 0;
}
