//write a c program to read and print the m rows and n coloumns 
#include<stdio.h>
int main ()
{
    int a[10][10],m,n,i,j;
    printf("\nEnter the array row and colomn sizes : \n ");
    scanf("%d%d",&m,&n);
    printf("\n Enter %d values :\n",(m*n));
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
         scanf("%d",&a[i][j]);
     printf("\n Your elements are :\n");
     for(i=0;i<m;i++)
     {
       for(j=0;j<n;j++)
        printf("%d\t",a[i][j]);
       printf("\n");
     } 
    
}