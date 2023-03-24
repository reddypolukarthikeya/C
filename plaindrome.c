//write a c programme to check whether the given number is plaindrome or not
#include<stdio.h>
 int main()
   {
       int m,n,t,r;
       printf("Enter n value: ");
       scanf("%d",&n);
       m=n;
       while (n>0)
       {
           t=n%10;
           r=r*10+t;
           n=n/10;
       }
       printf("\nReverse of the given number %d = %d",m,r);
       if (m==r)
       {
           printf("\nThe given number %d is a plaindrome number",m);
       }
       else
       {
           printf("\nThe given number %d is Not a Plaindrome number",m);
       }
             
   }