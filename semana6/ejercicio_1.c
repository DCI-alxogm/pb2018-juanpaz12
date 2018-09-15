/*este es el primer programa de la semanan 6, creado por Juan Paz*/

#include<stdio.h>
#include<math.h>

int main()
{

  int i, h=0,m=0,sem1=0,sem2=0,sem3=0,sem4=0,sem5=0,sem6=0,sem7=0,sem8=0,sem9=0;
	int ed[10],sex[10],semestre[10];
	float promedio[10],p=0;

	for(i=0;i<10;i++)
	  {
	printf("intruduce la edad del alumno %i: ",i+1);
	scanf("%i", &ed[i]);
	printf("Introduce el sexo del alumno %i(Introducir 0 para hombre o 1 para mujer): ",i+1);
	scanf("%i", &sex[i]);
	printf("Introduce el semestre de (1 a 9) del alumno %i: ",i+1);
	scanf("%i", &semestre[i]);
	printf("Introduce el promedio del alumno %i: ",i+1);
	scanf("%f", &promedio[i]);}

      for(i=0;i<10;i++){
        if(sex[i]==0)
		  {h++;
                       }
                  else{ m++;
                       }
                
                if(semestre[i]==1)
		  {
		sem1++;
		  }
	         else {if(semestre[i]==2)
		  {
		sem2++;
		 }
	         else {if(semestre[i]==3)
		  {
		sem3++;
		  }
	         else {if(semestre[i]==4)
		  {
		sem4++;
		  }
	         else {if(semestre[i]==5)
		  {
		sem5++;
		  }
	         else {if(semestre[i]==6)
		  {
		sem6++;
		  }
	         else {if(semestre[i]==7)
		  {
		sem7++;
		  }
	         else {if(semestre[i]==8)
		  {
		sem8++;
		  }
	         else {if(semestre[i]==9)
		  {
		sem9++;}}}}}}}}}}
		 
   p=p+promedio[i];
	
    p=p/10;
   
  printf("Se capturon los datos de 10 alumnos y este fue el resultado\n");
  printf("De los 10 alumnos, %i son hombres y %i son mujeres\n", h,m);
  printf("se estos %i son de primero\n", sem1);
  printf("se estos %i son de segundo\n", sem2);
  printf("se estos %i son de tercero\n", sem3);
  printf("se estos %i son de cuarto\n", sem4);
  printf("se estos %i son de quinto\n", sem5);
  printf("se estos %i son de sexto\n", sem6);
  printf("se estos %i son de septimo\n", sem7);
  printf("se estos %i son de octavo\n", sem8);
  printf("se estos %i son de noveno\n", sem9);
  printf("El promedio de los alumnos es de %f\n", promedio);


      
return 0; 
}
