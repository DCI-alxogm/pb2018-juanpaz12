/*Este es el primer ejemplo de la función for*/

#include<stdio.h>
int main()
{
float temp_K, temp_C;
float Temp_C,final,delta;
int n,i,t;
 
printf("Hola, ¿estas listo para comenzar?, presiona 1 cuando lo estes\n");
scanf("%i",&t);
  
while(t==1){ 
   
printf("Por favor ingresa un valor inical de temperatura\n");
   scanf("%f",&Temp_C);
   printf("ingresa el valor final de temperatura\n");
   scanf("%f",&final);
   printf("ingrasa el intervalo\n");
   scanf("%i",&n);
   
delta=(final-Temp_C)/n;
for(i=0;i<n;i++){
temp_K=temp_C+273.15;
printf("%f %f\n",temp_C,temp_K);
temp_C=temp_C+delta; // temp_C+=delta;
}

printf("Desea realizar otro calculo? presiona 1 para si y cualquier otro numero para no.\n");
scanf("%i",&t);
}
return 0;
}
