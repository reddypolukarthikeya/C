//write a c programme to print the sum of digits of the given number
#include<stdio.h>
  int main()
   {
      int m,n,sum=0,t;
      printf("Enter n value :");
      scanf("%d",&n);
      m=n;
      while (n>0)
      {   
          t = n % 10 ;      
          sum=sum+t;
          n=n/10;
      }
      printf("\nThe sum of digits of given number = %d",sum);
   }