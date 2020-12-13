#include <stdio.h>

int main()
{
  int a = 2;
  int *p;
  printf("valor de a: %d, endereco de a: %p, endereco de p: %p \n \n", a, &a, &p);
  p = &a;
  *p = 4;
  printf("valor de a: %d, valor de p: %p \n \n", a, p);
  a = 3;
  printf("valor de a: %d, valor de p: %p \n \n", a, p);
  return 0;
}