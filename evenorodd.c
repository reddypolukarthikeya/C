//write a c programme to chechk whether a given number is even or odd
#include<stdio.h>
  int main()
   {
       int n;
       printf("Enter n value ");
       scanf("%d",&n);
       if (n%2==0)
       {
          printf("\n The given number %d is Even.",n);
       }
       else
       {
           printf("\n The given number %d is Odd.",n);
       }
       
   }