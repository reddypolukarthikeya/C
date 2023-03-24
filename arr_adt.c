#include <stdio.h>
#include <stdlib.h>


struct array
    {
        int *a;
        int size;
        int length;
    };
void display(struct array arr)
   {
       int i;
       printf("\nElements are :\n ");
       for (i=0; i<arr.length; i++)
           printf("%d\t",arr.a[i]);
   }
int main () 
    {
       struct array arr;
       printf("Enter the size of the array : ");
       scanf("%d", &arr.size);
       arr.a = (int *)malloc(arr.size*sizeof(int));
       int n,i;
       printf("\nEnter the number of numbers : ");
       scanf("%d", &n);
       printf("\nEnter all Elements :\n");
       for(i=0;i<n;i++)
           scanf("%d", &arr.a[i]);
        arr.length = n;
        display(arr);
       return 0 ;
    }