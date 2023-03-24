#include <stdio.h>
void disp( int );
int main ()
{
   int n,a[6];
   scanf("%d",&n);
   disp(a[n-1]);
}
/* a[1000]={10,20,30,40,50}
   a[1]+a[2]+a[3]+.....a[n-1]
   */
  void disp( int )
{
    int i, a[6];
    for(i=0;i<n;i++)
       scanf("%d", &a[i]);
    for(i=0;i<n;i++)
       printf("%d\t", a[i]);
}