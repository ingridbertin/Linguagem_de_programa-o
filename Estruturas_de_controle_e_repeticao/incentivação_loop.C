#include<stdio.h>

int calcula_debito(int d, int p){
  int resultado;
  resultado = d-p;
  return resultado;
}
int main(){
  int divida = 1000;
  int parcela = 100;
  int i;
  for(i=0;i<10;i++){
    divida = calcula_debito(divida,parcela);
    printf("divida: %d \n", divida);
  }
  return 0;
}