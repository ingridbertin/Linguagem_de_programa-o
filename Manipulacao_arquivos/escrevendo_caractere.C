#include <stdio.h>

int main()
{
  FILE *fp;
  fp = fopen("exemplo.txt", "w");
  if (fp == NULL)
    printf("Erro ao abrir o arquivo \n");
  else
  {
    printf("Arquivo aberto com sucesso \n");
    printf("Digite o caractere a ser gravado no arquivo: ");
    char ch;
    ch = getchar(); /*Lê um caractere do teclado */
    fputc(ch, fp);  /*grava caractere no arquivo */
    fclose(fp);
    FILE *fp;
    fp = fopen("exemplo.txt", "r");
    if (fp == NULL)
      printf("Erro ao abrir o arquivo \n");
    else
    {
      char c;
      while ((c = fgetc(fp)) != EOF)
        printf("Caractere no arquivo: %c", c);
    }
  }
  return 0;
}