#include <stdio.h>
void pointer(int* c)
{
   printf("%d", *c);
}

int main () {
    int a = 10, *p;
    p = &a;
    printf("p = %d \n a =%d",*p,a);
    pointer();
}