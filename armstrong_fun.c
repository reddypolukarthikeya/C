#include<stdio.h>
int n,sum,t,m,k=0;
int arm(int n);
int main ()
{
    printf("\nInput any number :\n");
    scanf("%d",&n);
    m=n;
    k=arm(n);
    if(k==1)
       printf("\nArmstong number");
    else 
       printf("\nNot Armstong number");
}
int arm(int n)
{   
    while (n)
    {
       t=n%10;
       sum+=t*t*t;
       n/=10;
    }
    if(m==sum)
    {
      k++;
      return (k);
    }    
 
}