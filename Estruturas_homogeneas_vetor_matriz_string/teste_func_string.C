#include <stdio.h>
#include <string.h>

int main()
{
  char nome1[20], nome2[20];
  printf("Digite o primeiro nome: \n");
  scanf("%s", nome1);
  printf("Digite o segundo nome: \n");
  scanf("%s", nome2);
  printf("Comprimento do primeiro nome: %d \nComprimento do segundo nome: %d \n", strlen(nome1), strlen(nome2));
  if (strcmp(nome1, nome2) == 0)
    printf("As strings são iguais.\n");
  else if (strcmp(nome1, nome2) > 0)
    printf("nome1 maior do que nome2\n");
  else if (strcmp(nome1, nome2) < 0)
    printf("nome1 menor do que nome2\n");
  strcat(nome1, nome2);
  printf("nome1 concatenado com nome 2: %s \n", nome1);
  char nome3[] = "Luana";
  strcpy(nome1, nome3);
  printf("nome3 copiado em nome1: %s \n", nome1);
  if (strchr(nome1, 'a'))
    printf("a esta em %s\n", nome1);
  if (strstr(nome1, "ana"))
    printf("ana encontrado");
  return 0;
}