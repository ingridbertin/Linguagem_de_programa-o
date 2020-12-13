#include <stdio.h>

struct ponto
{
  int x, y;
};
int main()
{
  printf("Tamanho char: %d\n", sizeof(char));
  printf("Tamanho int: %d\n", sizeof(int));
  printf("Tamanho float: %d\n", sizeof(float));
  printf("Tamanho double: %d\n", sizeof(double));
  printf("Tamanho struct ponto: %d\n", sizeof(struct ponto));
  int a;
  double b;
  printf("Tamanho da variavel a: %d\n", sizeof a);
  printf("Tamanho da variavel b: %d\n", sizeof b);
  return 0;
}
/*Saída:
Tamanho char: 1
Tamanho int: 4
Tamanho float: 4
Tamanho double: 8
Tamanho struct ponto: 8
Tamanho da variavel a: 4
Tamanho da variavel b: 8 */