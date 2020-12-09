#include<stdio.h>

int main(){
  float N1, N2, N3, N4;
  printf("Insira 4 notas, separadas por virgula:\n");
  scanf("%f,%f,%f,%f", &N1,&N2,&N3,&N4);
  printf("N1: %.2f, N2: %.2f, N3: %.2f, N4: %.2f \n", N1,N2,N3,N4);
  float media = (N1+N2+N3+N4)/4.0;
  printf("Media: %.2f",media);
}