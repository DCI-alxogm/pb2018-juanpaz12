/*Este es el primer ejemplo de la función for*/
#include<stdio.h>
int main()
{
float temp_C,temp_K;
float inicial=100,final=200,delta;
int n=10,i;
delta=(final-inicial)/n;
for(i=0;i<n;i++){
temp_K=temp_C+273.15;
printf("%f %f\n",temp_C,temp_K);
temp_C=temp_C+delta;
//
temp_C+=delta;
}

return 0;
}
