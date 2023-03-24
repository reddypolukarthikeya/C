#include <stdio.h>
#include <stdlib.h>

struct array 
  {
      int a[10];
      int size;
      int length;
  };
struct array *merge(struct array *arr1,struct array *arr2)
  {
      int i=0,j=0,k=0;
      struct array *arr3=(struct array *)malloc(sizeof(struct array));
      while (i<arr1->length && j<arr2->length)
        {
            if (arr1->a[i]<arr2->a[j])
               arr3->a[k++] = arr1->a[i++];
            else
               arr3->a[k++] = arr2->a[j++];
        }
      for(;i<arr1->length;i++)
          arr3->a[k++] = arr1->a[i];
      for(;j<arr2->length;j++)
          arr3->a[k++] = arr2->a[j]; 
      arr3->length =arr1->length+arr2->length;
      arr3->size =10;
      return arr3;
  }

void display(struct array arr)
  {
      for (int i = 0; i <arr.length; i++)
           printf("%d\t",arr.a[i]);
  }

int main ()
  {
      struct array arr1={{2,6,10,15,25},10,5};
      struct array arr2={{3,4,7,18,20},10,5};
      struct array *arr3;
      arr3=merge(&arr1,&arr2);
      display(*arr3);
      return 0;
  }
