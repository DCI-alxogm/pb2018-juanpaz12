#include<stdio.h>
#include<math.h>

int main(){
	
	int u=0, i, op;
	int w=0, x=0, y=0, z=0;
	char t[100];

	printf("\nHola, elige una operación a realizar:  \n");
	printf("1)Converir de numeros binarios a decimales \n");
	printf("2)Convertir decimales a binarios \n");
	printf("Elija una de las opciones: ");
	scanf("%i", &u);

		switch (u){
		case 1:
		printf("Por favor pntroduce un número binario:\n ");
		scanf("%i", &w);
		while(w>0){
			x = w%10;
			if(x!=0){
				z+=pow(2,y);			
			}
			w/=10;
			y++;				
		}
		printf("\n El equivalente a  v decimal es %i\n", z);
		break;
		case 2:
		printf("\nIntroduce un número decimal entero: ");
		scanf("%i", &z);
		printf("\n El equivalente binario es: ");
		while(z>0){
			if(z%2==1){
				t[y++]='1';		
			}			
			else{
				t[y++]='0';			
			}
			z/=2;
		}
		for( i=y ; i>0 ; i--){
			printf("%c", t[i-1]);		
		}
		break;
}
	return 0;
}
