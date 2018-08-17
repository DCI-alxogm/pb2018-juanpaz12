/*creado el 15 de agosto de 2018 por Juan Paz*/

#include<stdio.h>
int main()
{
int edad,edad2;
char nombre[20];
printf("Hola este es el primer programa del curso\n");
printf("Dime tu nombre: \n");
scanf("%s",&nombre);
printf("Introduce tu edad: \n");
scanf("%i",&edad);
edad2=edad+10;
printf("Tu edad en el 2028 sera de: %i \n",edad2);
return 0;
}
