//write a c program to do matrix multiplication using pointers
#include<stdio.h>
#include<conio.h>
int main ()
{
    int i,j,a[20][20],b[20][20],c[20][20];
    int n,m,p,q,k;
    printf("Enter the order of A :\n");
    scanf("%d %d",&m,&n);
    printf("\nEnter the order of B :\n");
    scanf("%d %d",&p,&q);
    if(n==p)
     printf("\nThe matrix multiplication is possible");
    else
    {
        printf("\nThe matrix multiplication is not possible");
        return (0);
    }
    printf("\nEnter the elements of A :\n");
    for(i=0;i<m;i++)
     for(j=0;j<n;j++)
      scanf("%d",(*(a+i)+j));
    printf("\nEnter the elements of B :\n");
    for(i=0;i<m;i++)
     for(j=0;j<n;j++)
      scanf("%d",(*(b+i)+j));
    printf("\nThe multiplication of matrix is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            ((c+i)+j)=0;
            for(k=0;k<q;k++)
             ((c+i)+j)=*(*(c+i)+j)+(*(*(a+i)+k)*(*(*(b+k)+j));
        }
    }
    printf("")
}