/* Girón Knepp Hanna Sofía
Tarea 2 repetitivas 1
Haga un diagrama de flujo para obtener la tabla de multiplicar de un
n ́umero entero N, comenzando desde el 1.*/

#include <stdio.h>

int main()
{
  int numero, i, resultado;

  printf("Ingrese un numero para la tabla de multiplicar: ");
  scanf("%d", &numero);

  for (i = 1; i <= 10; i++)
    {
      resultado = numero * i;
      printf("%d x %d = %d\n", numero, i, resultado);
    }
  return 0;
}
