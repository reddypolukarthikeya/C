//write a c programme to find factorial of given number using while loop
#include<stdio.h>
  int main ()
   {
       int n,i,f;
       printf("Enter n value : ");
       scanf("%d",&n);
       i = 1;
       f = 1;
       while (n>=i)
       {
           f = f * i;
           i++;
       }
       printf("\n%d Factorial = %d",n,f);
   }