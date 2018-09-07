#include <stdio.h>
int main ()
{
	int i,n,op=1,j;
	while(op==1){
	j=1;
	printf("Por favor introduzca el numero el cual quiere calcular el factorial \n");
	scanf("%i",&n);
	for(i=1;i<=n;i++){
          
		j=j*i;
}
        printf("\nEl factorial del numero %i es %i\n",n,j);
        printf("Desea volver a correr el programa? presione 1 para si y cualquiero otro numero para no\n");
        scanf("%i",&op);
}
return 0;
} 
