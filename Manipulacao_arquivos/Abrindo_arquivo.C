#include <stdio.h>

int main()
{
  FILE *fp;
  fp = fopen("exemplo.txt", "w+");
  if (fp == NULL)
    printf("Erro ao abrir o arquivo \n");
  else
    printf("Arquivo aberto com sucesso \n");
  fclose(fp);
  return 0;
}