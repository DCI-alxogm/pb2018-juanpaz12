/*este es el trecer programa de la semana 5*/

#include <stdio.h>
#include <math.h>

int main()
{  
   int i, inicial, final, raiz,m , primo;
   
   printf("Hola con este programa puedes saber cuales son los numeros primos en un intevalo de numeros\n");
   printf("Por favor ingrasa el numero minimo del intervalo a evaluar\n");
   scanf("%i",&inicial);
   printf("Por favor ingrasa el numero maximo del intervalo a evaluar\n");
   scanf("%i",&final);
   
      while((final-inicial)>100)
{
         printf("\nel intervalo ingresado es muy grande, ingrasa valores mas pequeños: ");
         scanf("%i %i", &inicial, &final);
}
  
     for(i=inicial;i<=final;i++)
     {raiz=sqrt(i);
     for(m=1;m<=raiz;m++){
     if(i%m!=0){primo=0;
        }
if (primo==0){
    printf("los numeros primeros de %i a %i son %i\n",inicial, final,i);}
   } 
}
return 0;
}

