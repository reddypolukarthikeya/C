#include <stdio.h>
int fact(int a)
{
    if (a == 0)
        return 1;
    else
        return (a-1)*a;
}
int comb(int n, int r)
{
    int num,den;
    num = fact(n);
    den = fact(r)*fact(n-r);
    return num/den;
}

int main () {
    printf("%d \n",comb(5,1));
}