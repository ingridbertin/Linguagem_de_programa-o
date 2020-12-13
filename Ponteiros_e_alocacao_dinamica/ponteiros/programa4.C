#include <stdio.h>

int main(){
    int x;
    int* p1; 
    int* p2;
    p1 = &x;
    p2 = p1;
    printf("p1: %p, p2: %p, endereco de x: %p",p1,p2,&x);
    return 0;
 }
// Saída: 
// p1: 0061FF14, p2: 0061FF14, endereco de x: 0061FF14