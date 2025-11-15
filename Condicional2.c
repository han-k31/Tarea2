/* Girón Knepp Hanna Sofía 
Tarea 2 condicional 2
Dado como dato el sueldo de un trabajador considere un aumento del
15% si un sueldo es inferior a $1,000 y de un 12% en caso contrario.
Imprimir el sueldo con el aumento incorporado. Hacer el diagrama de
flujo correspondiente.*/

#include <stdio.h>

int main()
{
  double sueldo, aumento, total;

  printf("Ingrese el sueldo: ");
  scanf("%lf", &sueldo);

  if ( sueldo < 1000 )
  {
    aumento = sueldo * .15;
    total = aumento + sueldo;
    printf("El aumento es de: %lf\n", aumento);
    printf("El total es de: %lf\n", total);
  }
  else
  {
    aumento = sueldo * .12;
    total = aumento + sueldo;
    printf("El aumento es de: %lf\n", aumento);
    printf("El total es de: %lf\n", total);    
  }
  return 0;
}
