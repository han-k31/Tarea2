/* Girón Knepp Hanna Sofía
Tarea 2 ejercicio 1
Escriba un diagrama de flujo tal que dado como datos dos numeros y
calcular la suma, resta y multiplicación de dichos numeros.*/

#include <stdio.h>
int main()
{
  int numero1, numero2;
  int suma, resta, multiplicacion;

  printf("Da el primer numero: ");
  scanf("%d", &numero1);

  printf("Da el segundo numero: ");
  scanf("%d", &numero2);

  suma = numero1 + numero2;
  resta = numero1 - numero2;
  multiplicacion = numero1 * numero2;

  printf("Suma: %d + %d = %d\n", numero1, numero2, suma);
  printf("Resta: %d - %d = %d\n", numero1, numero2, resta);
  printf("Multiplicación: %d * %d = %d", numero1, numero2, multiplicacion);

  return 0;
}
