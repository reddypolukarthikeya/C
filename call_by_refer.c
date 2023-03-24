//Write a c program to swap two numbers using functions .(Call by Reference)
#include<stdio.h>
void swap(int *, int *);
void main ()
{
    int a,b;
    printf("\nEnter a and b values : ");
    scanf("%d %d",&a,&b);
    printf("\nValues Before swap a = %d and b = %d ",a,b);
    swap(&a,&b);
    printf("\nAfter swap values a = %d and b = %d",a,b);
}
void swap(int *m,int *n)
{
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}