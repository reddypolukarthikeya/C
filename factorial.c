//write a c programme to find the factorial of the given number using for loop
#include<stdio.h>
 int main ()
   {
       int f=1,i,n;
       printf("Enter n value : ");
       scanf("%d",&n);
       for ( i = 1; n >= i ; i++)
       {
           f = f * i;
       }
       printf("\n%d Factorial = %d",n,f);
   }