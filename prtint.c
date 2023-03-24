#include<stdio.h>
int main ()
{
    int n,j,i,k=1;
    printf("\nInput any number :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<i;j++)
       {
            printf("%d  ",k);
            k++;     
       }
        printf("\n");
    }
}