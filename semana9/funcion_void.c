#include<stdio.h>
void cuadrado();
int main(){
    cuadrado();
    return 0;
 
}
void cuadrado(){ 
     float x, x2;
     printf("introduce un número\n");
     scanf("%F", &x);
     x2=x*x;
     printf("El cuadrado de %f es %F\n", x, x2); 
}
