/* Girón Knepp Hanna Sofía
Tarea 2 ejercicio 4
Una persona invierte en un banco una determinada cantidad de dinero y
a una cierta tasa de inter ́es mensual. Construya un diagrama de flujo que
permita obtener el monto de dinero que obtendr ́a al finalizar el mes.*/

#include <stdio.h>

int main()
{
  double dinero, interes, monto;
  double tasainteres = .15;

  printf("Ingrese la cantidad de dinero: ");
  scanf("%lf", &dinero);

  interes = dinero * tasainteres;
  monto = interes + dinero;

  printf("Interes generado: %lf\n", interes);
  printf("Monto total: %lf\n", monto);

  return 0;
}
