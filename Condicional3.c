/* Girón Knepp Hanna Sofía
Tarea 2 Condicional 3
Hacer un diagrama de flujo para calcular el precio de un ticket ida y vuelta
en ferrocarril, conociendo la distancia de ida y el tiempo de estancia.
Tambi ́en se sabe que si el numero de d ́ıas de estancia es mayor a 7 y la
distancias total (ida y vuelta) a recorrer es mayor a 800 km, el ticket tiene
un descuento del 30%. El precio por km es de $0.23.*/

#include <stdio.h>

int main()
{
  double tiket = .23;
  double distancia, dias, precio, descuento, total;

  printf("Ingrese el numero dias de estancia: ");
  scanf("%lf", &dias);
  
  printf("Ingrese la distancia de ida en km: ");
  scanf("%lf", &distancia);
  precio = distancia * tiket;

  if ((dias > 7) && ((distancia*2) > 800))
  {
    descuento = precio *.3;
    total = precio - descuento;
    printf("El descuento es de: %lf\n", descuento);
    printf("El total a pagar es de: %lf\n", total);    
  }

  else
  {
    printf("El total a pagar es de: %lf\n", precio);
  }
  return 0;
}
