#include <stdlib.h>
#include<stdio.h>
int main()
{
int *ptr, i , n1, n2;
   printf("Introduce el numero de elementos n1: ");
   scanf("%d", &n1);
   printf("\nIntroduce el nuevo numero de elementos n2: ");
   scanf("%d", &n2);
   ptr = (int*) malloc(n1 * sizeof(int));
   printf("Dirección de la memoria reservada: ");
   for(i = 0; i < n1; ++i){
   printf("%ls\t",ptr + i);
}
   ptr = realloc(ptr, n2);
   for(i = 0; i < n2; ++i){
   printf("%ls\t", ptr + i);
}
   free(ptr);
  return 0;
}
