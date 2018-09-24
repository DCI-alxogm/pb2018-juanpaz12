
/*Este el el ejercicio e l semana 7*/
#include<stdio.h>
#include<math.h>
 
int main(){
   FILE *fp;
   int num;
   float funx,h,l, i, sep, x, p, a, b, integral;
   
  
   fp=fopen("Datos.txt","r");
   fscanf(fp,"%f %f %f %f %i",&x, &p, &a, &b, &num);
   sep=(b-a)/x;

   fp=fopen("resultados.txt","w");
   fprintf(fp," x                  f(x)              integral(x)\n");
   
   for(i=a; i<=b; i+=sep){
   funx=pow(i,p);
    h=(b-a)/sep;
   integral= (pow(a, p) + pow(i, p))/2;
   for(l=1; l<b; l++){
   integral*=pow((a+l*h), p);
   integral*=h;}
}
       fprintf(fp,"%f           %f         %f",i, funx, integral);
       fclose(fp);
    return 0; 
}	
