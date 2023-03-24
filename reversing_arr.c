#include <stdio.h>
#include <stdlib.h>
struct array 
  {
      int a[10];
      int size;
      int length;
  };
void swap(int *x,int *y)
  {
      int temp;
      temp  = *x;
      *x = *y;
      *y = temp;
  }
void rev(struct array *arr)
  {
      int *b,i,j;
      b = (int*)malloc(arr->length*sizeof(int));
      for(i=arr->length-1,j=0;i>=0;i--,j++ )
        b[j] = arr->a[i];
      for(i=0;i<arr->length;i++)
        arr->a[i] = b[i];
  }
void rev1(struct array *arr)
  {
    int temp;
    for(int i=0,j=arr->length-1;i<j;i++,j--)
        swap(&arr->a[i],&arr->a[j]);
        
  }
void display(struct array arr)
  {

      for (int i=0;i<arr.length;i++)
         printf("%d\t",arr.a[i]);
  }
int main ()
  {
      struct array arr= {{2,3,4,5,6},10,5};
      rev(&arr);
      rev1(&arr);
      display(arr);
      return 0;
  }