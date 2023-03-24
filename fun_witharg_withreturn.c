//write a c program to explain the working of functions with arguments and with return values
#include<stdio.h>
int fact(int);
int main ()
{
    int n,m;
    printf("\nEnter n value : ");
    scanf("%d",&n);
    m=fact(n);
    printf("\n%d Factorial = %d",n,m);
}
int fact(int n1)
{
    int i=1,f=1;
    for(i=1;i<=n1;i++)
       f=f*i;
    return(f);
}