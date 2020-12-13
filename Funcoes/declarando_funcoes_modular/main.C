#include <stdio.h>
#include "prototipos.h"

int main()
{
  float x = 5.5;
  float y = 4.5;
  float resultado = 0.0;
  resultado = soma(x, y);
  printf("Resultado da soma: %f\n", resultado);
  return 0;
}