/* Girón Knepp Hanna Sofía
Tarea 2 condicional 1
En un negocio de productos electrodom ́esticos aplican un descuento del
8% a todos aquellos clientes cuya compra es superior a $2,500. Dado como
dato el monto de la compra del cliente, calcule lo que el cliente debe pagar.
Hacer el diagrama de flujo correspondiente.*/

#include <stdio.h>

int main()
{
  double monto, descuento, total;

  printf("Ingrese el monto total de compra: ");
  scanf("%lf", &monto);

  if ( monto > 2500 )
  {
    descuento = monto * 0.08;
    total = monto - descuento;

    printf("El descuento es de: %lf\n", descuento);
    printf("El monto total es de: %lf\n", total);
  }
  else 
  {
    printf("El monto es de: %lf", monto);
  }
  
  return 0;
}
