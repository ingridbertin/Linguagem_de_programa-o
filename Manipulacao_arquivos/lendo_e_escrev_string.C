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
    printf("Digite uma string a ser gravado no arquivo: ");
    char ch[50];
    fgets(ch, sizeof(ch), stdin);
    int result = fputs(ch, fp); /*grava string no arquivo */
    if (result == EOF)
      printf("Erro na Gravacao\n");
    fclose(fp);
    FILE *fp;
    fp = fopen("exemplo.txt", "r");
    if (fp == NULL)
      printf("Erro ao abrir o arquivo \n");
    char *leitura;
    leitura = fgets(ch, sizeof(ch), fp);
    if (leitura == NULL)
      printf("Erro na leitura\n");
    printf("string no arquivo: %s", leitura);
    fclose(fp);
  }
  return 0;
}