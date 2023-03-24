//write a c programme to find the roots of a quadratic.
#include<stdio.h>
#include<math.h>
  int main ()
   {
       float a,b,c,d,r1,r2;
       printf("Enter a b c values ");
       scanf("%f %f %f ",&a,&b,&c);
       d=b*b-4*a*c;
       if (d>0)
       {
           printf("*****ROOTS ARE REAL*****");
           r1=-b+sqrt(d)/2*a;
           r2=-b-sqrt(d)/2*a;
           printf("\n Root 1 = %f \n Root 2 = %f",r1,r2);
       }
       else if (d==0)
       {
           printf("\n*****ROOTS ARE EQUAL*****");
           r1=-b/2*a;
           printf("\nRoot 1 = %f \n Root 2 = %f",r1,r1);

       }
       else
       {
           printf("\n*****ROOT ARE IMAGINARY*****");
       }
       
   }