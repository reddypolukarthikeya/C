#include <stdio.h>
#include <stdlib.h>
int main () {
    /********METHOD - I**********/ 
int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};//initialisation
    /********METHOD - II*********/
int *b[3];
b[0] = (int *)malloc(4*sizeof(int));
b[1] = (int *)malloc(4*sizeof(int));
b[2] = (int *)malloc(4*sizeof(int));

    /*********METHOD - III********/
int **c;
c = (int **)malloc(3*sizeof(int));
c[0] = (int *)malloc(4*sizeof(int));
c[1] = (int *)malloc(4*sizeof(int));
c[2] = (int *)malloc(4*sizeof(int));
c[1][2]=a[1][2];
printf("%d\n%d",c[1][2],a[1][2]);
free(c);
free(b);
return 0;
}