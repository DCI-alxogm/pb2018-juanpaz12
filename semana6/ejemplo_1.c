/*Estos son los primeros 4 ejemplos de la semana 6*/

#include<stdio.h>
#include<math.h>

int main()
{   int i;
    float numeros[10];  
    for ( i = 0; i < 10; i++ ) { numeros[ i ] = 0.;           //ejemplo 1
}
    for ( i = 0; i < 10; i++ ) { scanf("%f",&numeros[ i ]);   //ejemplo 2
}
    for ( i = 0; i < 10; i++ ) { printf("%f \n",numeros[i]);  //ejemplo 3
}
    for ( i = 0; i < 10; i++ ) {                              //ejemplo 4
    scanf("%f",&numeros[ i ]);
    numeros[i]*=2;
    printf("%f\n", numeros[i]);
}
return 0;
}
