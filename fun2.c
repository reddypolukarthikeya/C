//with arguments without return value (call by value)
#include <stdio.h>
void print();
int main()
{
    int a = 10, b = 20;
    print(a,b);
}
void print(int x,int y)
{
    printf("%d--%d",x,y);
}