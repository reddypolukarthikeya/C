//write a c programme to swap the two numbers
#include<stdio.h>
  int main ()
    {
        int a,b;
        printf("Enter a & b values : ");
        scanf("%d %d",&a,&b);
        printf("\nBefore swap a = %d b = %d",a,b);
        a = a + b;
        b = a - b;
        a = a - b;
        printf("\nAfter swap a = %d b = %d",a,b);
    }