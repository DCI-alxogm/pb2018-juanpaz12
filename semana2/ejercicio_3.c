/*Hola este es el tercer programa del curso, creado por Juan Manuel Alvarez Paz a 15 de agosto de 2018*/ 
/*Hola estre es el segundo programa, creado por Juan Manuel Alvareaz Paz el 15 de agosto de 2018.*/

#include<stdio.h>
int main()
{
   float a, b, c, d, r1, r2, r3, r4;
   printf("Hola te voy solicitar 4 numeros para poder realizar una serie de ecuaciones. \n");
   printf("Por favor ingresa tu primer numero. \n");
   scanf("%f",&a);
   printf("Ahora ingrasa tu segundo numero. \n");
   scanf("%f",&b);
   printf("Ahora ingrasa tu tercer segundo numero. \n");
   scanf("%f",&c);
   printf("Por ultimo ingrasa tu ultimo numero. \n");
   scanf("%f",&d);
  

   r1= (a+b)*c/d;
   printf("Al realizar la operacion (a+b)*c/d se obtiene %f \n", r1); 
   r2= ((a+b)*c)/d;
   printf("Al realizar la operacion ((a+b)*c)/d se obtiene %f \n", r2);
   r3= (a+b)*c/d;
   printf("Al realizar la operacion (a+b)*c/d se obtiene %f \n", r3);
   r4= a+(b*c)/d;
   printf("Al realizar la operacion a+(b*c)/d se obtiene %f \n", r4);
   
   return 0;
}

