#include <stdio.h>

int main()
{
  float notas[10];
  notas[0] = 2.5;
  notas[1] = 4.5;
  notas[2] = 9.0;
  notas[3] = 7.0;
  notas[4] = 5.5;
  notas[5] = 2.5;
  notas[6] = 4.5;
  notas[7] = 9.0;
  notas[8] = 7.0;
  notas[9] = 5.5;
  int i;
  for (i = 0; i < sizeof(notas) / sizeof(float); i++)
  {
    printf("%f ", notas[i]);
  }
  return 0;
}