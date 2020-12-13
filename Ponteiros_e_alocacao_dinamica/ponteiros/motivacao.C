#include <stdio.h>
 
void incrementar(int *ptr){
 (*ptr) = (*ptr)+500;
}
 
int main(){
    int x = 1000;
    printf("%d\n", x);  // Queremos que imprima '1000'
    int *ptr = &x;
    incrementar(ptr);
    printf("%d\n", x);  // Queremos que imprima '1500'
    return 0;
}