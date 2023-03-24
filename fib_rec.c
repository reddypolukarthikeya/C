#include <stdio.h>

int fib(int n)
{
    if (n <= 1)
       return n;
    return fib(n-2)+fib(n-1);
}
int F[10];
int fib1(int n)

{
    if (n<=1){
        F[n]=n;
        return n;
    }
    else 
    {
        if (F[n-2] == -1)
            F[n-2] = fib1(n-2);
        if (F[n-1] == -1)
            F[n-1] = fib1(n-1);
        
        return F[n-2] + F[n-1];
    }
}

int main () {

    printf("%d" ,fib(6));
    for (int i=0; i<10;i++)
        F[i] = -1;
    printf("\n%d",fib1(6));
}