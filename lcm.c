//write a c programme to find the LCM of two numbers
#include<stdio.h>
  int main ()
    {
        float a,b,i=1,f=1,g=1,h=1,l;
        printf("Enter a & b values : ");
        scanf("%f %f",&a,&b);
        while (a<=i)
        {
           f = f * i;
           i++;
        }
          while (b<=h)
        {
           g = g * i;
           h++;
        }
        l = h * g;
        printf("\n LCM = %f",l);
    }