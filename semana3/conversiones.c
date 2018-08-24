#include <stdio.h>
#include<math.h>

int main(){

int A;
double x=0.0, y=0.0, z=0.0, r=0.0, a=0.0, l=0.0, X=0.0, Y=0.0, Z=0.0, aux=0.0, ang=0.0, c=0, f=0, k=0, C=0;

printf("Hola, por favor selecione una opcion:\n");
printf("Hola, por favor selecciona una opcion: \n (1) Convertir grados celsius a farenheit y a kelvin \n (2) convertir coordenadas cartesianas a esfericas \n (3) convertir coordenadas cartesianas a polares \n ");
scanf("%i", &a);

switch(A){
	case 1:
		printf(" \n Ingresa una tempreatura en grados celsius: ");
		scanf("%lf", &c);
	
		f = (c*1.8)+32;
		k = c + 273.15;
		
		printf("\n Fahrenheit: %lf \n Kelvin: %lf \n", f, k);
	
		C = (f - 32)/1.8;
		printf("Comprobación %lf == %lf \n", c, C);
		break;
	case 2:
		printf(" \n Introduce los valores de x, y, z: ");
		scanf("%lf %lf %lf", &x, &y, &z);
	
		aux = (x*x)+(y*y)+(z*z);
		r = sqrt(aux);
		aux = (sqrt(x*x+y*y))/z;
		
		a = atan(aux);
		l = atan (y/x);
		printf("Al onvertir de coordendas cartesianas a esfericas obtenemos que \n r= %lf \n a=%lf \n l=%lf \n", r, a, l);	
		X = r*sin(a)*cos(l);
		Y = r*sin(a)*sin(l);
		Z = r*cos(a);
		printf("\n De coordenadas esfericas a cartesianas obtenemos \n X= %lf \n Y=%lf \n Z=%lf \n", X, Y, Z);
		break;
	case 3 :
		printf("\n Introduce los valores de x y y: ");
		scanf("%lf %lf", &x, &y);
		r = sqrt(x*x+y*y);
		if(x!=0){
			ang = atan(y/x);
			ang = (ang*180)/3.1416;
		}
		else{
			ang = 90;
		}
		if(x<0 && y>0){
			ang = 180+ang;
		}
		else if(x<0 && y<0){
			ang = ang+180;
		}
		else if(x>0 && y<0){
			ang = 360+ang;
		}
		printf("\n La distancia al punto es %f con un angulo de %f \n", r, ang);
		break;
	default :
		printf("La opción indicada no existe \n");
}

printf("\n Gracias por utilizar mi grograma :) \n");
return 0;
}
