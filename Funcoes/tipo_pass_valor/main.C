#include <stdio.h>
#include "prototipos.h"

int main()
{
  float x = 5.5;
  float y = 4.5;
  float resultado = 0.0;
  printf("Valor de x antes da funcao: %f \n", x);
  resultado = soma(x, y);
  printf("Valor de x depois da funcao: %f", x);
  printf("Resultado da soma: %f\n", resultado);
  return 0;
}