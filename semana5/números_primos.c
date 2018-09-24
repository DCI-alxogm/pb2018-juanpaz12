/*este es el trecer programa de la semana 5*/

#include <stdio.h>
#include <math.h>

int main()
{  
<<<<<<< HEAD
   int x=0, i, a, inicial, final, num, raiz, op;
   
   
   printf("Hola con este programa puedes saber cuales son los numeros primos en un intevalo de numeros\n");
   printf("¿Estas listo para comenzar?, cuando estes listo ingresa 1\n");
   scanf("%i",&op);
while(op==1){

=======
   int i, inicial, final, raiz,m , primo;
   
   printf("Hola con este programa puedes saber cuales son los numeros primos en un intevalo de numeros\n");
>>>>>>> 06e64afa3c5459a60ddb6cae1400da4b2ad8e760
   printf("Por favor ingrasa el numero minimo del intervalo a evaluar\n");
   scanf("%i",&inicial);
   printf("Por favor ingrasa el numero maximo del intervalo a evaluar\n");
   scanf("%i",&final);
   
<<<<<<< HEAD
while ((final-inicial)>100){
	printf("los itervalos son muy grandes, por favor ingrasa intervalos meenorea a 100\n");
	printf("por favor ingresa un nuevo valor minimo");
    scanf("%i",&inicial);
    printf("Por favor ingrasa el numero maximo del intervalo a evaluar\n");
    scanf("%i",&final);}
    
   for(i=inicial;i<=final;i++){
   num=1;
   raiz=sqrt(i); 
   
   for(a=2; a<=raiz;a++){
   if ((i%a)==0){
   	num=0;
   }
   }
   if(num==1){
   	printf("%i\n",i);
   	x=x+1;
   }
}
   printf("¿deseas volver a utilizar el programa?, presiona 1 si es así, de lo contrario presiona otro número\n");
   scanf("%i",&op);
=======
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
>>>>>>> 06e64afa3c5459a60ddb6cae1400da4b2ad8e760
}
return 0;
}

