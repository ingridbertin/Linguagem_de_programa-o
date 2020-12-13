#include <stdio.h>
float soma(float *a, float *b)
{
  *a = *a + *b;
  printf("Valor de x dentro da funcao: %f \n", *a);
  return *a;
}