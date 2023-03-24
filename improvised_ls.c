#include <stdio.h>
struct array
{
    int a[10];
    int size;
    int length;
};
void display (struct array arr)
  {
      int i;
      printf("\nElements are :\n");
      for (i = 0;i<arr.length;i++)
          printf("%d\t",arr.a[i]);
  }
void swap (int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int ls(struct array *arr,int key)
{
    int i;
    for(i=0;i<arr->length;i++)
    {
        if (key == arr->a[i])
        {
           // swap(arr->a[i],&arr->a[i-1]);//=>TRANSPOSITION
            swap (&arr->a[i],&arr->a[0]);//=>MOVE TO FRONT/HEAD
            return i;
        }
    }   
    return -1;
}

int main ()
{
    struct array arr={{2,3,4,5,6},10,5};
    printf("%d\n",ls(&arr,4));
    display(arr);
    return 0;
}