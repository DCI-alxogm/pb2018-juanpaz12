/*Programa creado por Aldair Gonzalez, primer projecto parcial de la materia de programación basica, el 26 de septiembre de 2018.*/

#include<stdio.h>
#include<math.h>

int main(){

  double xo, yo, zo, vxo, vyo, vzo, r, i, M, T, h; 
  float G;
    int a;     
    
    FILE*op;
    FILE*dat;
          
    
    dat=fopen("Planetas.txt", "r");
    fscanf(dat,"%lf %lf %lf", &T, &h,&M);
    printf("El tiempo utilizado en las orvitas de los planetas es:%lf\nEl avance tenporal que se tomó fue de:%lf\nUtilizando como masa del sol:%lf\n", T, h, M);
    for(a=1;a<10;a++){
      switch(a){
 case 1:
    op=fopen("Posiciones_velocidades__de_Mercurio.txt", "w");
    fscanf(dat, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Valores correspondiente a Mercurio\n");
    break;

    case 2:
    op=fopen("Posiciones_velocidades__de_Venus.txt", "w");
    fscanf(dat, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
     printf("Valores correspondientes a Venus\n");
    break;

    case 3:
    op=fopen("Posiciones_velocidades_de_Tierra.txt", "w");
    fscanf(dat, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Valores correspondientes a la Tierra\n");
    break;

    case 4:
    op=fopen("Posiciones_velocidades__de_Marte.txt", "w");
    fscanf(dat, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Valores correspondientes a Marte\n");
  
    break;

    case 5:
    op=fopen("Posiciones_velocidades_de_Jupiter.txt", "w");
    fscanf(dat, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
     printf("Valores correspondientes a Jupiter\n");
    
    break;

    case 6:
    op=fopen("Posiciones_velocidades_de_Saturno.txt", "w");
    fscanf(dat, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    printf("Valores correspondientes a Saturno\n");
    
    break;

    case 7:
    op=fopen("Posiciones_velocidades_de_Urano.txt", "w");
    fscanf(dat, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
     printf("Valores correspondientes a Urano\n");
    break;

    case 8:
    op=fopen("Posiciones_velocidades_de_Neptuno.txt", "w");
    fscanf(dat, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
     printf("Valores correspondientes a Neptuno\n");
    break;

    case 9:
    op=fopen("Posiciones_velocidades_de_Pluton.txt", "w");
    fscanf(dat, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
     printf("Valores correspondientes a Pluton\n");
    break;  
    }
 printf("Posición inicial: (%f, %f, %f)\n velocidad inicial %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
 r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
 printf("El valor de radio es igual a %lf\n", r);
 
    G=4.0*pow(3.14159265359,2);
    vxo*=365.242;
    vyo*=365.242;
    vzo*=365.242;
     fprintf(op,"   xo         yo        zo       vxo       vyo       vzo\n");

    for(i=0; i<T; i+=h){   
    xo=xo+vxo*h;
    yo=yo+vyo*h;
    zo=zo+vzo*h;
    
    vxo=vxo-(h*((G*M*xo)/pow(r,3)));
    vyo=vyo-(h*((G*M*yo)/pow(r,3)));
    vzo=vzo-(h*((G*M*zo)/pow(r,3)));
   
    fprintf(op,"%f %f %f %f %f %f \n", xo, yo, zo, vxo, vyo, vzo);
    
    }
   
    fclose(op);  
    }
return 0;
}
