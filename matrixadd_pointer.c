//write a c program to do matrix multiplication.
#include<stdio.h>
int main ()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
    printf("Enter array row and coloumn sizes of matrix A : ");
    scanf("%d%d",&m,&n);
    printf("\nEnter array row and coloumn sizes of matrix B : ");
    scanf("%d%d",&p,&q);
    if(m!=p || n!=q)
    {
      printf("\n Matrix addition is not possible");
      return(0);
    }
    printf("\n Enter %d values in matrix A :\n",(m*n));
    for(i=0;i<m;i++)
     for(j=0;j<m;j++)
      scanf("%d",&a[i][j]);
    printf("\n Enter %d values of matrix B :\n",(m*n));
    for(i=0;i<m;i++)
     for(j=0;j<m;j++)
      scanf("%d",&b[i][j]);
    for(i=0;i<m;i++)
     for(j=0;j<n;j++)
      c[i][j]=a[i][j]+b[i][j];
    printf("\n Matrix A :\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<m;j++)
       printf("%d\t",a[i][j]);
      printf("\n");
    }
     printf("\n Matrix B :\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<m;j++)
        printf("%d\t",b[i][j]);
      printf("\n");
    }
     printf("\n Matrix C :\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<m;j++)
       printf("%d\t",c[i][j]);
      printf("\n");
    }
}