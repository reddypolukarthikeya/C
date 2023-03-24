#include <stdio.h>
#include <stdlib.h>
int main () {
    int *p;
    p = (int *)malloc(5*sizeof(int)); 
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    int *q,i;
    q = (int *)malloc(10*sizeof(int));
    for(i=0;i<5;i++)
        q[i] = p[i];
    free(p);
    p=q;
    q=NULL;
    printf("%d",p[1]);
    free(q);
}