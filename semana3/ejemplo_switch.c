/*este programa ha sido creado por Juan Manuel Alvarez Paz*/
#include <stdio.h>


int main()
 {
 	int a;
 	 printf("Hola por favor elige una opci�n\n");
 	printf("(1) Dato curioso \n (2): saludar\n");
 	scanf("%i",&a);
 	switch(a){
	case 1:
		printf("La Coca Cola en un principio tuvo coca�na. De hecho a finales del siglo XIX,\n cuando esta soda apareci� muchas bebidas tambi�n inclu�an este ingrediente.\n La cantidad que conten�a era muy baja, 8,45 miligramos por vaso.\n Al final, la marca elimin� la sustancia de su f�rmula en 1902.\n �Que te parece! \n");
		break;
	case 2:
		printf("holaaaaa \n");
		break;
	default :
		printf("Opcion inexistente \n");
}
printf("Adios pimpollo");

return 0;
}
