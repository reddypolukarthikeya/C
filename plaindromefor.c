//write a c programme to check whether the given number is plaindrome or not
#include<stdio.h>
 int main ()
   {
    int n,m,r=0;
    printf("Enter n value : ");
    scanf("%d",&n);
    for (m = n; n > 0 ; n = n / 10)
    {
       r = r * 10 + n % 10;
    }
    printf("\n Reverse of the given number %d = %d ",m,r);
    if (m==r)
    {
        printf("\n The given number %d is a Plaindrome number",m);
    }
    else
    {
        printf("\n The given number %d is Not a Plaindrome number",m);
    }
    
   }