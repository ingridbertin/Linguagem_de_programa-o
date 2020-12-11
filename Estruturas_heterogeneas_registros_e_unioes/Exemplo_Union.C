#include <stdio.h>
#include <stdlib.h>

union funcionario
{
  char nome[32];
  char cargo[28];
  float salario;
};
int main()
{
  union funcionario func;
  printf(" Tamanho: %d \n", sizeof(union funcionario));
  printf("Digite o nome do funcionario: ");
  fgets(func.nome, sizeof(func.nome), stdin);
  fflush(stdin);
  printf("Digite o cargo do funcionario: ");
  fgets(func.cargo, sizeof(func.cargo), stdin);
  fflush(stdin);
  printf("Digite o salario do funcionario: ");
  scanf("%f", &func.salario);
  printf("Funcionario: \nnome: %scargo: %ssalario: %.2f \n", func.nome, func.cargo, func.salario);
  return 0;
}
