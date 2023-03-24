#include<stdio.h>
int n,k;
int evod(int n);
int main ()
{
    k=0;
    printf("\nInput any positive number :\n");
    scanf("%d",&n);
    k=evod(n);
    if(k==0)
      printf("\nEven");
    else 
      printf("\nOdd");

}
int evod(int n)
{
  k=n%2;
}