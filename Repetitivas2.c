/* Girón Knepp Hanna Sofía
Tarea2 repetitivas 2
Construya un diagrama de flujo que lea 100 n ́umeros naturales y cuente
cu ́antos de ellos son positivos, negativos o nulos.*/

#include <stdio.h>
int main()
{
  int numero, i, positivo = 0, negativo = 0, nulo = 0;

  printf("Ingrese 100 numeros: \n");

  for (i = 1; i <= 100; i++)
  {
    printf("Numero %d: ", i);
    scanf("%d", &numero);

    if (numero < 0)
    {
      negativo++;
    }
    else if (numero > 0)
    {
      positivo++;
    }
    else
    {
      nulo++;
    }
  }

  printf("Numeros positivos: %d\n", positivo);
  printf("Numeros negativos: %d\n", negativo);
  printf("Numeros nulos: %d\n", nulo);

  return 0;
}
