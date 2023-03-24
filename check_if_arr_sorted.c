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
      temp = *x;
      *x = *y;
      *y = temp;
  }
void insert_sort(struct array *arr,int x)
  {
      int i = arr->length-1;
     if(arr->length == arr->size)
        return;
    while(i>=0 && arr->a[i]>x)
      {
          arr->a[i+1] = arr->a[i];
          i--;
      }
    arr->a[i+1] = x;
    arr->length++;
  }
int check_if_sorted(struct array arr)
  {
      for(int i=0; i<arr.length-1;i++) 
        {
            if (arr.a[i]>arr.a[i+1])
               return 0;
        }
      return 1;
  }
void rearrange(struct array *arr)
  {
      int i=0,j=arr->length - 1;
      while(i<j)
        {
            while(arr->a[i]<0)
                  i++;
            while(arr->a[j]>=0)
                  j--;
            if (i<j)
               swap (&arr->a[i],&arr->a[j]);
        }
  }
void display(struct array arr)
  {
      for (int i = 0; i <arr.length; i++)
           printf("%d\t",arr.a[i]);
  }
int main ()
  {
    struct array arr={{2,-3,5,10,-15},10,5};
    insert_sort(&arr,6);
    printf("\n%d\n",check_if_sorted(arr));
    rearrange(&arr);
    display(arr);
  }