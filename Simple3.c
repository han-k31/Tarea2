/* Girón Knepp Hanna Sofía
Tarea 2 ejercicio 3
En una Casa de Cabio necesitan construir un programa que dado como
dato una cantidad expresada en d ́olares, convierta esa cantidad en pesos.
Construir el diagrama de flujo correspondiente. Tomar en cuenta que:
1dolar ↢ 11.96pesos.*/

#include <stdio.h>

int main()
{
  float cambio = 11.96;
  float dolares, pesos;

  printf("Ingrese la cantidad en dólares: ");
  scanf("%f", &dolares);

  pesos = dolares * cambio;

  printf("Cantidad en pesos: %f", pesos);

  return 0;
}
