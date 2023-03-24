//write a c programme to convert f to c
#include<stdio.h>
  int main ()
   {
       float c,f;
       printf("Enter F value ");
       scanf("%f",&f);
       c = 5*(f-32)/9;
       printf("\n C= %f",c);
   }