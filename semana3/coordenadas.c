/*Este programa ha sido creado por Juan Manuel Alvarez Paz, el 20 de agosto de 2018*/

#include<stdio.h>
#include<math.h>

int main()
{ 
    float x, y, z,r,o,p;
    printf("Intoduce los valorez que te voy a solicitar\n");
    printf("Por favor introduce el valor de x\n");
    scanf("%f",&x);
    printf("introdece el valor de y\n");
    scanf("%f",&y);
    printf("Por ultimo introduce el valor de z\n");
    scanf("%f",&z);

    r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
    o=acos(z/r)*(3.1416/180);
    p=atan(y/x)*(3.1416/180);
    
    printf("la coordenada de la forma (r,θ,φ) es: (%f,%f,%f) \n", r, o, p);
    return 0;
    }
     

     
                        
	
