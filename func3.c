//with arguments without return 
#include <stdio.h>
void print(int* , int * );
int main()
{
    int a = 10, b= 20;
    print(&a, &b);
    printf("%d## %d\n",&a,&b);//x= address of a , y = address of b
}
void print(int* x,int * y)
{
    printf("%d---%d\n",*x,*y);//*-->gives the value in the address variable
    
}