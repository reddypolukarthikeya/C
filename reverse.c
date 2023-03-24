//write a c programme to print the reverse of the given number
#include<stdio.h>
  int main ()
    {
        int n,m,r,t;
        printf("Enter n value : ");
        scanf("%d",&n);
        m=n;
        while (n>0)
        {
           t=n%10;
           r=r*10+t;
           n=n/10;   
        }
       printf("\nReverse of the given number %d = %d",m,r);
    }