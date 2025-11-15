/* Girón Knepp Hanna Sofía
Tarea 2 condicional 4
Construir un diagrama de flujo que pueda determinar, dados dos n ́umeros
enteros, si un n ́umero es divisor del otro.*/

#include <stdio.h>

int main()
{
  int numero1, numero2, resultado;

  printf("Da el primer numero: ");
  scanf("%d", &numero1);

  printf("Da el segundo numero: ");
  scanf("%d", &numero2);

  resultado = numero1 % numero2;

  if (resultado == 0)
  {
    printf("El resultado es divisor entre el otro");
  }

  else
  {
    printf("El resultado no es divisor entre el otro");
  }
  
  return 0;
}
