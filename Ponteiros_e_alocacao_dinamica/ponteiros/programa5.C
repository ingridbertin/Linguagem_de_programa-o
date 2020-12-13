#include <stdio.h>
int main()
{
  int x = 10;
  int *p = &x;
  printf("p = Hexadecimal: %p, Decimal: %d, endereco de x: %p \n", p, p, &x);
  p++; //Incrementa p em uma posição
  printf("p = Hexadecimal: %p, Decimal: %d \n", p, p);
  p = p + 15; //Incrementa p em 15 posições
  printf("p = Hexadecimal: %p, Decimal: %d \n", p, p);
  p = p - 2; //Decrementa p em 2 posições
  printf("p = Hexadecimal: %p, Decimal: %d \n", p, p);
  return 0;
}
//Saida
// p = Hexadecimal: 0061FF18, Decimal: 6422296, endereco de x: 0061FF18
//p = Hexadecimal: 0061FF1C, Decimal: 6422300
//p = Hexadecimal: 0061FF58, Decimal: 6422360
//p = Hexadecimal: 0061FF50, Decimal: 6422352