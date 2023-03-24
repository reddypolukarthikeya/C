//write a c programme to convert f to r
#include<stdio.h>
  int main ()
  {
      float f,r; 
      printf("Enter F value ");
      scanf("%f",&f);
      r = 4*(f-32)/9;
      printf("\nR= %f",r);
        }