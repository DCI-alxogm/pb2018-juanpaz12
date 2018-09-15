/*este es la modifiacion del programa de finciones de la semanan 5 */ 
#include<stdio.h>
#include<stdio.h>
#include<math.h>

int main()
{
	FILE *fp;
    float x, e, f, g, h, j, i, n;
    int a, b, c;
    
	fp=fopen("funciones.txt","w"); 
    printf("Hola que evalua funciones con intervalos\n");
    printf("ingrasa el valir minimo de x\n");
    scanf("%i",&a);
    printf("por favor ingrasa el valir maximo de x\n");
    scanf("%i",&b);
    printf("por ultimo ingrasa el intervalo en que se realizaran los calculos\n");
    scanf("%i",&c);

    n=(b-a)/c;
    for (i=0; i<=n; i++){  
    x=(a+(c*i));
    e=exp(x);
    f=log(x);
    g=sin(x); 
    h=cos(x);
    j=sqrt(x);

    printf("Exp(%f) = %f\n",x,e);
    printf("Log(%f) = %f\n",x,f);
    printf("Sen(%f) = %f\n",x,g);
    printf("Cos(%f) = %f\n",x,h);
    printf("Raiz cuadrada(%f) = %f\n",x,j);
    printf("Los resultados con x = %f\n",x);
    printf("Los resultados anteriormente dados han sido guardados en un arcivo .txt en la direncion en donde esta tu ejecutable\n");
    
    fprintf(fp,"Exp(%f) = %f\n",x,e);
    fprintf(fp,"Log(%f) = %f\n",x,f);
    fprintf(fp,"Sen(%f) = %f\n",x,g);
    fprintf(fp,"Cos(%f) = %f\n",x,h);
    fprintf(fp,"Raiz cuadrada(%f) = %f\n",x,j);
    fprintf(fp,"Los resultados con x = %f\n",x);
}
return 0;
fclose(fp);
}
  

