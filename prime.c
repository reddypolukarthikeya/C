//write a c programme to chechk whether the given number is prime or not using for loop.
#include<stdio.h>
 int main()
 {
     int n,i,count;
     printf("Enter n value ");
     scanf("%d",&n);
     count=0;
     for ( i=1;n>=i;i=i+1)
      {
        if (n%i==0)
        {
            count=count+1;
        }
        
      }
     if (count==2)
      {
         printf("The given number %d is a Prime number ",n);
      }
    else
    {
        printf("The given number %d is not a Prime number ",n);
    }
    
     
    
 }