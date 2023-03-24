//write a c programme to check whether the given number is an aromstrong number or not.
#include<stdio.h>
int main ()
{
    int n,m,sum,t;
    printf("Enter n value : ");
    scanf("%d",&n);
    m=n;
    sum=0;
    while (n)
    {
       t=n%10;
       sum+=t*t*t;
       n=n/10;
    }
    if (m==sum)
      printf("\n The given number %d is an Aromstrong number. \n",m);
    else
      printf("\n The given number %d is NOT an Aromstrong number. \n",m);
}