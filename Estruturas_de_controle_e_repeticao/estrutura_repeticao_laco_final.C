#include <stdio.h>

int main()
{
  float N1, N2, N3, N4;
  int contador = 1;
  float media_geral = 0;
  do
  {
    printf("Insira 4 notas, separadas por virgula:\n");
    scanf("%f,%f,%f,%f", &N1, &N2, &N3, &N4);
    printf("N1: %.2f, N2: %.2f, N3: %.2f, N4: %.2f \n", N1, N2, N3, N4);
    float media = (N1 + N2 + N3 + N4) / 4.0;
    media_geral = media_geral + media;
    printf("Media: %.2f \n", media);
    if (media >= 7.0)
    {
      printf("Aprovado \n");
    }
    else
    {
      printf("Reprovado \n");
    }
    contador++;
  } while (contador <= 50);
  printf("Media geral: %.2f", media_geral / 50);
  return 0;
}