/***************HEAD RECURSION*****************
                first func() then printf
*/
#include<stdio.h>

void fun(int n)
{
    if (n > 0) 
    {
        fun(n-1);
        printf("%d\n", n);
    }
}
 int main () {

     fun(3);
 }