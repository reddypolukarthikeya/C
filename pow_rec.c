#include <stdio.h>

int pow1(int a, int b) 
{
    if (b == 0)
        return 1;
     return pow1(a,b-1)*a;
}
int pow2(int a, int b)
{
    if (b == 0)
        return 1;
    if (b % 2 == 0) 
        return pow2(a*a,b/2);
    else
        return pow2(a*a,(b-1)/2)*a;
}
int main () 
{
   printf("%d\n",pow1(2,4));
   printf("%d\n",pow2(2,4));
}