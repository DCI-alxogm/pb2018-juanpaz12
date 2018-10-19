#include <stdio.h>
float x, x2;

float cuadrado();
int main()
{
cuadrado();
printf("%f\n", x2);
}
float cuadrado()
{
printf("introduce el número que deseas elevar al cuadrado:\n");
scanf("%f", &x);
x2=x*x;
printf("El cuadrado de %f es 'n", x);
return x2;
}
