//write a c programme to check whether the given number is a prime or not using while loop.
#include<stdio.h>
 int main()
  {
      int n,i,count;
      printf("Enter n value ");
      scanf("%d",&n);
      i=1;
      count=0;
      while (n>=i)
      {
         if (n%i==0)
         {
           count=count+1;
         }
         i++;
      }
     if (count==2)
     {
      printf("\nThe given number %d is prime",n);
     }
     else
     {
      printf("\nThe given number %d is not prime",n);
     }
           
  }