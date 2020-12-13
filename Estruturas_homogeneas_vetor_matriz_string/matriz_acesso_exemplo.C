#include <stdio.h>

int main()
{
  float m[3][3];
  int i, j;
  for (i = 0; i <= 2; i++)
  { /*varre linha*/
    for (j = 0; j <= 2; j++)
    { /*varre coluna*/
      printf("Digite o elemento mat[%d,%d] \n", i, j);
      scanf("%f", &m[i][j]);
    }
  }
  for (i = 0; i <= 2; i++)
  { /*varre linha*/
    for (j = 0; j <= 2; j++)
    { /*varre coluna*/
      printf("mat[%d][%d] = %.2f\n", i, j, m[i][j]);
    }
  }
  return 0;
}