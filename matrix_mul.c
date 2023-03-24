//write a c program to do matrix multiplication
#include<stdio.h>
int main ()
{
    int a[10][10],b[10][10],c[10][10];
    int m,n,p,q,i,j,k;
    printf("\nEnter order of matrix A :\n");
    scanf("%d %d",&m,&n);
    printf("\nEnter the order of matrix B :\n");
    scanf("%d %d",&p,&q);
    if(n!=p)
    {
        printf("\nMatrix multiplication not possible");
        return(0);
    }
    printf("\nEnter %d elements in matrix A :\n",(m*n));
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    printf("\nEnter %d elements in matrix B :\n",(p*q));
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
            scanf("%d",&b[i][j]);
    for(i=0;i<m;i++)
        for(j=0;j<p;j++)
        {
            c[i][j]=0;
            for(k=0;k<q;k++)
                 c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    printf("\nMatrix A :\n");
    for(i=0;i<m;i++)  
    {
        for (j=0;j<n;j++)
            printf("%d\t",a[i][j]);  
        printf("\n");  
    }
     printf("\nMatrix A :\n");
    for(i=0;i<p;i++)  
    {
        for (j=0;j<q;j++)
            printf("%d\t",a[i][j]);  
        printf("\n");  
    }
     printf("\nMatrix C:\n");
    for(i=0;i<m;i++)  
    {
        for (j=0;j<p;j++)
            printf("%d\t",c[i][j]);  
        printf("\n");  
    }
}