#include<stdio.h>
int n,i,count;
int prime(int n);
int main ()
{
    int k;
    printf("\nInput a positive number :\n");
    scanf("%d",&n);
    k=prime(n);
    if (k==2)
      printf("\nPrime");
    else 
      printf("\nNot prime");
}
int prime (int n)
{   
    for(i=1;i<=n;i++)
        if(n%i==0)
           count = count + 1;  
    return(count);
}