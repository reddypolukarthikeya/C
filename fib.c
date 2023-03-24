//write a c programme to print fibonocci series upto given number
#include<stdio.h>
  int main()
    {
        int n,a,b,s;
        printf("Enter n value : ");
        scanf("%d",&n);
        a = 0;
        b = 1;
        printf("\n  %d  %d",a,b);
        s = a + b;
        while (n>=s)
        {
            printf("  %d ",s);
            a = b;
            b = s;
            s = a + b;
        }
        

    }