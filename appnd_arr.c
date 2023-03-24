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
void append(struct array *arr,int x)
  {
      if(arr->length < arr->size)
         arr->a[arr->length++] = x;
  }
void insert(struct array *arr,int index,int x)
  {
      int i;
      if(index >=0 && index <= arr->length)
      {
           for(i=arr->length;i>index;i--)
              arr->a[i]=arr->a[i-1];
            arr->a[index] = x;
            arr->length++;
      }
  }
int delete(struct array *arr,int index)
  {
      int x=0,i;
      if(index>=0 && index<=arr->length-1)
      {
          x = arr->a[index];
          for(i=index;i<=arr->length-1;i++)
              arr->a[i] = arr->a[i+1];
          arr->length--;
          return x;
      }
      return 0;
  }
void main ()
  {
      struct array arr={{2,3,4,5,6},10,5};
      
       
      
      printf("\n%d\n",delete(&arr,0));
      display(arr);
  }