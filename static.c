//write a c program to explain the working of static storage class
#include<stdio.h>
void fun(void);
int main ()
{
    fun ();
    fun ();
    fun ();

}
void fun()
{
    static int b=20;
    b++;
    printf("Calling Fun() : %d\n",b);
}