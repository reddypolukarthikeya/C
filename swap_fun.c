#include<stdio.h>
int a,b;
int swap(int *,int * );
int main ()
{
    printf("\nEnter the a and b values :\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("\nAfter swap values of a : %d and b : %d",a,b);
}
int swap(int *m, int *n)
{
    int temp;
    temp = *m;
    *m  = *n;
    *n=temp;
}