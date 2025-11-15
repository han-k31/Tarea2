/* Girón Knepp Hanna Sofía
Tarea 2 ejercicio 2
Construir un diagrama de flujo tal que dado el radio de un c ́ırculo, calcule
e imprima el  ́area y la circunferencia. El  ́area del c ́ırculo se calcula como
Area = π ∗ radio2 y la circunferencia se calcula como Circunferencia =
2 ∗ π ∗ radio.*/

#include <stdio.h>

int main()
{
  float PI = 3.1416;
  float radio, area, circunferencia;

  printf("Ingrese el radio del circulo: ");
  scanf("%f", &radio);

  if (radio < 0)
  {
    printf(" El radio no puede ser negativo");
    return 0;
  }

  area = PI * radio * radio;
  circunferencia = 2 * PI * radio;

  printf("\n El area del circulo es: %f\n", area);
  printf(" La circunferencia es: %f", circunferencia);

  return 0 ; 
}
