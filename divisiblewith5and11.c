//write a c programme to check whether the given number is divisible with 5 and 11 or not.
#include<stdio.h>
  int main ()
    {
        int n;
        printf("Enter n value : ");
        scanf("%d",&n);
        if (n%5==0)
        {
            if (n%11==0)
            {
                printf("\n The given number %d is divisible by both 5 & 11",n);
            }
            
        }
        else
        {
            printf("\n The given number %d is Not divisible by both 5 & 11 ",n);
        }
        
        
    }