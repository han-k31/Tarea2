/* Girón Knepp Hanna Sofía
Tarea 2 arreglos 1
Escribir un diagrama de flujo tal que dado como entrada un arreglo uni-
dimensional de enteros, obtenga como resultado la suma de los mismos.*/

#include <stdio.h>
int main()
{
  int s, suma = 0, i = 0;

  printf("Tamaño del arreglo: ");
  scanf("%d", &s);

  int arr[s];
  for (i = 0; i < s; i++)
  {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &arr[i]);
    suma = suma + arr[i];
  }
  printf("Suma: %d\n", suma);
  return 0;
}
