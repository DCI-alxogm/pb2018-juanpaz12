/*Este es el promer proyecto del curso, creado por Juan Manuel Alvarez Paz*/
#include<stdio.h>
#include<math.h>
int main(){
   int opcion, s;
   float r, i, G;
   double h, M, m, T, xo, yo, zo, vxo, vyo, vzo; 
   FILE *op;   
   printf("Hola, este programa ayudará a cualcular la órbita de un planeta\n");
   printf("(1) Mercurio\n(2) Venus\n(3) Tierra\n(4) Marte\n(5)Jupiter\n(6) Saturno\n(7) Urano\n(8) Neptuno\n(9) Pluton\n(10) Todos los planetas anteriormente mencionados\n");
   printf("Por favor selcciona un planeta:\n");
   scanf("%d", &opcion);
  switch(opcion){
  case 1:
    op= fopen("Mercurio.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("Orbita de Mercurio.txt","w");
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
    break;

  case 2:
    op= fopen("Venus.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("orbita de venus.txt","w");
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
    break;

  case 3:
    op= fopen("Tierra.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
     fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("Orbita de la  Tierra.txt","w");
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
    break;
  
  case 4:
    op= fopen("Marte.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("Orbita de Marte.txt","w");
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
    break;
  case 5:
    op= fopen("Jupiter.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("Orbita de Jupiter.txt","w");
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
    break;

  case 6:
    op= fopen("Saturno.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("Orbita de Saturno.txt","w");
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
    break;

   case 7:
    op= fopen("Urano.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
     fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("Orbita de Urano.txt","w");
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
    break;

  case 8:
    op= fopen("Neptuno.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
     fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("Orbita de Neptuno.txt","w");
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
    break;
   
  case 9:
    op= fopen("Pluton.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
     fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("Orbita de Pluton.txt","w");
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
    break;
case 10:
 for(s=1; s<=9; s++){
 
 switch(s){
  case 1:
    op= fopen("Mercurio.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("Orbita de Mercurio.txt","w");
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
    break;

  case 2:
    op= fopen("Venus.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("orbita de venus.txt","w");
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
    break;

  case 3:
    op= fopen("Tierra.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
     fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("Orbita de la  Tierra.txt","w");
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
    break;
  
  case 4:
    op= fopen("Marte.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("Orbita de Marte.txt","w");
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
    break;
  case 5:
    op= fopen("Jupiter.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("Orbita de Jupiter.txt","w");
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
    break;

  case 6:
    op= fopen("Saturno.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
    fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("Orbita de Saturno.txt","w");
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
    break;

   case 7:
    op= fopen("Urano.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
     fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("Orbita de Urano.txt","w");
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
    break;

  case 8:
    op= fopen("Neptuno.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
     fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("Orbita de Neptuno.txt","w");
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
    break;
   
  case 9:
    op= fopen("Pluton.txt","r");
    fscanf(op, "%lf %lf %lf %lf %lf %lf", &xo, &yo, &zo, &vxo, &vyo, &vzo);
     fscanf(op, "%lf %lf %lf %lf", &M, &T, &h, &m);
    printf("La posición inicial del planeta: (%f, %f, %f)\nLa velocidad inicial del palneta: %f î + %f ĵ + %f ẑ\n", xo, yo, zo, vxo, vyo, vzo);
   printf("masa sol:%f\nTiempo de evolucion:%f\nIncremento Temporal:%f\nMasa del planeta:%f\n", M, T, h, m);
   G=4.0*pow(3.14159265359,2);
   r=sqrt((xo*xo)+(yo*yo)+(zo*zo));
   vxo*=365.242;
   vyo*=365.242;
   vzo*=365.242;

   printf("El radio de este planeta es igual a %f\n", r);
   op=fopen("Orbita de Pluton.txt","w");
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
    break;
}

   

  default:
    printf("Lo sentimos, pero el planeta que indicó aun no esta disponible.\nPor favor ingrese un planeta del listado:\n");
    scanf("%d", &opcion);
    break;
}
}  
return 0;
}

