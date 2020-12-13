#include <stdio.h>  /*A função printf está aqui*/
#include <stdlib.h> /*A função malloc está aqui*/
int main()
{
  int *p;
  p = (int *)malloc(5 * sizeof(int));
  int i;
  for (i = 0; i < 5; i++)
  {
    printf("Digite o valor da posicao %d: ", i);
    scanf("%d", &p[i]);
  }
  printf("valor da primeira posicao da array: %d", p[0]);
  return 0;
}