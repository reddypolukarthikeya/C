//write a c programme to print the day of a week
#include<stdio.h>
  int main ()
    {
        int n;
        printf("Enter n value ");
        scanf("%d",&n);
        if (n==1)
        {
            printf("\n Day is Sunday ");
        }
        else if (n==2)
        {
            printf("\n Day is Monday");
        }
        else if (n==3)
        {
            printf("\n Day is Tuesday");
        }
        else if (n==4)
        {
            printf("\n Day is Wednesday");
        }
        else if (n==5)
        {
            printf("\n Day is Thursday");
        }
        else if (n==6)
        {
            printf("\n Day is Friday");
        }
        else if (n==7)
        {
            printf("\n Day is Saturday");
        }
        else
        {
            printf("\n INVALID");
        }
                
        
    }