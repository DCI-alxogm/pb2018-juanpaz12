/*este es el primer programam de la semanan 6, creado por Juan Paz*/

#include<stdio.h>
#include<math.h>

int main()
{
  FILE *fp;
  int i, h=0,m=0,sem1=0,sem2=0,sem3=0,sem4=0,sem5=0,sem6=0,sem7=0,sem8=0,sem9=0;
	int ed[10],sex[10],semestre[10];
	float promedio[10],p=0;
  
    fp=fopen("alumnos.txt","r");
	for(i=0;i<10;i++)
	  {
	fscanf(fp,"%i", &ed[i]);
	fscanf(fp,"%i", &sex[i]);
	fscanf(fp,"%i", &semestre[i]);
	fscanf(fp,"%f", &promedio[i]);}
	fclose(fp);

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
  fp=fopen("resumen.txt","w"); 
  fprintf(fp,"Se capturon los datos de 10 alumnos y este fue el resultado\n");
  fprintf(fp,"De los 10 alumnos, %i son hombres y %i son mujeres\n", h,m);
  fprintf(fp,"De estos %i son de primero\n", sem1);
  fprintf(fp,"De estos %i son de segundo\n", sem2);
  fprintf(fp,"De estos %i son de tercero\n", sem3);
  fprintf(fp,"De estos %i son de cuarto\n", sem4);
  fprintf(fp,"De estos %i son de quinto\n", sem5);
  fprintf(fp,"De estos %i son de sexto\n", sem6);
  fprintf(fp,"De estos %i son de septimo\n", sem7);
  fprintf(fp,"De estos %i son de octavo\n", sem8);
  fprintf(fp,"De estos %i son de noveno\n", sem9);
  fprintf(fp,"El promedio de los alumnos es de %f\n", promedio);


      
return 0; 
}
