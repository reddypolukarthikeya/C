/*#include <stdio.h>

int sum (int n)
  {
       if (n == 0) 
           return 0;
        return (sum (n - 1) + n );

    
  }
int main () {

    printf ("%d",sum(3));
    return 0;
}*/
/*#include <stdio.h>
int sum (int n)
{
    int i,s=0;
    for (i=1;i<=n;i++)
         s = s + i;
    return s;
}
int  main () {

    printf ("%d",sum(3));
    return 0;
}*/
#include <stdio.h>

int sum(int n)
{
    return (n*(n+1))/2;
}

int main () {
    printf ("%d",sum(3));
    return 0;
}