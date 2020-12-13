#include <stdio.h>
#include <stdlib.h>
int main(){
 int i;

 int *p = (int *) malloc(5*sizeof(int));
 for (i = 0; i < 5; i++){
 p[i] = i+1;
 }
 for (i = 0; i < 5; i++){
 printf("%d, ",p[i]);
 }
 printf("\n");
 //Diminui o tamanho do array
 p = (int *) realloc(p,3*sizeof(int));
 for (i = 0; i < 3; i++){
 printf("%d, ",p[i]);
 }
 printf("\n");
 //Aumenta o tamanho do array
 p = (int *) realloc(p,10*sizeof(int));
 p[5] = 6;
 p[6] = 7;
 p[7] = 8;
 p[8] = 9;
 p[9] = 10;
 for (i = 0; i < 10; i++){
 printf("%d, ",p[i]);
 }
 return 0;
}