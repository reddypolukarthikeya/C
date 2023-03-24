//write a c programme to check whether the given year is leap year or not
#include<stdio.h>
int main ()
  {
      int n;
      printf("Enter n value : ");
      scanf("%d",&n);
      if (n%4==0)
      {
          printf("\n The given year %d is a Leap year",n);
      }
      else
      {
          printf("\n The given year %d is Not a Leap year",n);
      }
      
  }