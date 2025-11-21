/* Girón knepp Hanna Sofia
Tarea 2 repetitivas 4
Hacer un diagrama de flujo que calcule e imprima el producto de los N
primeros n ́umeros naturales.*/

#include <stdio.h>

int main()
{
  int N, i = 1, producto = 1;

  printf("Ingrese el valor de N entero: ");
  scanf("%d", &N);

  if (N < 0)
  {
    printf("No puede ser negativo\n");
    return 1;
  }

  printf("Factorial: ");
  for (i = 1; i <= N; i++)
  {
    producto = producto * i;
    if (i < N) 
    {
      printf("%d x ", i);
    } 
  }

  printf(" = %d\n", producto);
  
  return 0;
}
