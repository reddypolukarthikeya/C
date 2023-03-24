#include <stdio.h>

double e(int x, int n)
{
    static double p = 1, f = 1;
    double r ;
    if (n == 0)
       return 1;

    r = e(x,n-1);
    p = p * x;
    f = f * n;
    return r+p/f;
}
double e1(int x, int n){
    static double s = 1;
    if  (n == 0)
        return s;
    s= 1 + (x*s/n);
    return e1(x,n-1);
}
double e2(int x, int n)
{
    double s;
    for (;n>0;n--)
        s=1+(x*s)/n;
    return s;
}
int main () {

    printf("%lf \n",e(1,10));
    printf("%lf \n",e1(1,10));
    printf("%lf \n",e2(1,10));
    return 0;
}
