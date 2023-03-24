//write a c programme to check whether a given number is positive or negative
#include<stdio.h>
  int main()
  {
      int n;
      printf("Enter n value ");
      scanf("%d",&n);
      if (n>=0)
      {
          printf("\n The given number %d is Positive",n);
      }
      else
      {
          printf("\n The given number %d is Negative",n);
      }
      
  }