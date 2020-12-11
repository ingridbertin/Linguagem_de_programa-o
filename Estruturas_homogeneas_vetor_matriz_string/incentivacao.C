#include <stdio.h>
#include <math.h>

int main()
{
  float nota, media, soma, subtracao = 0.0;
  soma = 0.0;
  media = 0.0;
  float nota1, nota2, nota3, nota4, nota5;
  int i;
  for (i = 1; i <= 5; i++)
  {
    printf("Digite uma nota:\n");
    scanf("%f", &nota);
    soma = soma + nota;
    if (i == 1)
      nota1 = nota;
    if (i == 2)
      nota2 = nota;
    if (i == 3)
      nota3 = nota;
    if (i == 4)
      nota4 = nota;
    if (i == 5)
      nota5 = nota;
  }
  media = soma / 5.0;
  float desvio_padrao = 0.0;
  subtracao = pow((nota1 - media), 2.0) + pow((nota2 - media), 2.0) + pow((nota3 - media), 2.0) + pow((nota4 - media), 2.0) + pow((nota5 - media), 2.0);
  desvio_padrao = sqrt((1.0 / 5.0) * subtracao);
  printf("%f", desvio_padrao);
  return 0;
}