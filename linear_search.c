#include <stdio.h>
struct array
{
    int a[10];
    int size;
    int length;
};
int ls(struct array arr,int key)
{
    int i;
    for(i=0;i<arr.length;i++)
    {
        if (key == arr.a[i])
            return i;
    }   
    return -1;
}
void display (struct array arr)
  {
      int i;
      printf("\nElements are :\n");
      for (i = 0;i<arr.length;i++)
          printf("%d\t",arr.a[i]);
  }
int main ()
{
    struct array arr={{2,3,4,5,6},10,5};
    printf("%d\n",ls(arr,4));
    display(arr);
    return 0;
}