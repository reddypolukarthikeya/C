//write a c programme to find the sum of digits of the given number
#include<stdio.h>
  int main ()
    {
        int m,n,sum;
        printf("Enter n value : ");
        scanf("%d",&n);
        m=n;
        for ( sum = 0 ; n > 0; n=n/10)
        {
            sum = sum + n % 10;
        }
        printf("\n The sum of digits of the given number %d = %d",m,sum);
    }