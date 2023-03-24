#include<stdio.h>
int max(int b);
int main ()
{
   int n,a[20],i;
   printf("\nInput array size :\n");
   scanf("%d",&n);
   printf("\nInput %d elements :\n",n);
   for(i=0;i<=n;i++)
      scanf("%d",&a[i]);
   for(i=0;i<=n;i++)
       printf("\nelement - %d : %d ",i,a[i]);
   
}