/*Creado el 20 de agosto de 2018 por Juan Manuel Alvarez Paz*/ 
 #include<stdio.h>
 #include<math.h>
int main()
{
float x, x1, y, y1, y2;

   printf("Introduce un valor para x \n");
   scanf("%f", &x);

   x1= x*(3.1416/180);
   
  y=exp(-x);
  y1=cos(x)+2*tan(x/2);
  y2=log(x1)+(3*pow(x1,2));

  printf("El valor para la primera función es %f \n", y);
  printf("El valor para la segunda función es %f \n", y1);
  printf("El valor para la tercera función es %f \n", y2);
return 0;
}

