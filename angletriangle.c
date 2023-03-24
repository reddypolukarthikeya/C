//write a c programme to check whether the given angles of a triangle can form a triangle
#include<stdio.h>
  int main ()
    {
        int a,b,c,d;
        printf("Enter the angles of the triangle : ");
        scanf("%d %d %d",&a,&b,&c);
        d = a + b + c;
        if (d==180)
        {
            printf("\n The traingle can be formed");
        }
        else
        {
            printf("\n The traingle cannot be formed");
        }
        
    }