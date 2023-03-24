//write a c program to explain the working of auto storage class
#include<stdio.h>
void fun(void);
void main ()
{
    fun ();
    fun ();
    fun ();
}
void fun()
{
    auto int b=20;
    b++;
    printf("Calling Fun () : %d\n",b);
}