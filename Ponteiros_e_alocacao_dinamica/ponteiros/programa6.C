#include <stdio.h>

int main()
{
  int x;
  int y;
  int *p;
  int *p1;
  p = &x;
  p1 = &y;
  if (p == p1)
  {
    printf("Ponteiros iguais \n");
  }
  else
  {
    printf("Ponteiros diferentes \n");
  }
  return 0;
}