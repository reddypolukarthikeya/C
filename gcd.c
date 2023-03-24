//write a c program to find the GCD of two numbers
#include<stdio.h>
int main () 
{
    int m,n;
    printf("Enter m,n value : ");
    scanf("%d %d",&m,&n);
    while (m!=n)
    {
    if (m>n)
       m=m-n;
    else 
       n=n-m;
    }
    printf("\n GCD = %d",m);

}