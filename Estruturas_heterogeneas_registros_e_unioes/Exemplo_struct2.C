#include <stdio.h>
#include <stdlib.h>

struct funcionario
{
  char nome[32];
  char cargo[28];
  float salario;
};
int main()
{
  struct funcionario func;
  printf(" Tamanho: %d \n", sizeof(struct funcionario));
  printf("Digite o nome do funcionario: ");
  fgets(func.nome, sizeof(func.nome), stdin);
  fflush(stdin);
  printf("Digite o cargo do funcionario: ");
  fgets(func.cargo, sizeof(func.cargo), stdin);
  printf("Digite o salario do funcionario: ");
  fflush(stdin);
  scanf("%f", &func.salario);
  printf("Funcionario: \nnome: %scargo: %ssalario: %.2f \n", func.nome, func.cargo, func.salario);
  return 0;
}
