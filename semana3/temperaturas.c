/*Este es el primer programa de la semana 3, el objetivo es csmbiar de temperaturas en °C a K y °F; Este progrma fue creado por Juan Manuel Alvarez Paz, el 20 de agosto de 2018.*/

#include<math.h>
#include<stdio.h>

int main()
{
  float t1, t2, t3, t4; 
   printf("Hola para facilitar el día a día en la escuela hemos creado un programa el cual ayua a convertir temperaturas de °C a K y °F; y finalmeta a °C para realizar una comprovación.\n");
   printf("por favor ingrasa la temperatura en °C\n");
   scanf("%f",&t1);
   
   t2= t1+273.15;
   printf("De acuedo don la tempertura ingresada, en K equivale a %f \n", t2);
  
   t3= (1.8*(t2-273)+32);
   printf("la temperatura en °F es ingual a %f \n", t3);

   printf("para comprovar que todos nuestro calculos han sido realizador correctamante te mustro la temperatuta con la que hicimos las  opreaciones corespondientes.\n");

   t4= (t3-32)*5/9;
   printf(" la temperatura que ingresaste fue %f \n", t4);	
   return 0; 
}  




