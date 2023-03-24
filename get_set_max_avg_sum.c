#include <stdio.h>
struct array
  {
     int a[10];
     int size;
     int length;
  };
int get (struct array arr, int index)
  {
      if (index >=0 && index <arr.length)
          return arr.a[index];
      return -1;
  }
void set (struct array *arr, int index,int x)
  {
      if (index >=0 && index <arr->length)
           arr->a[index]=x;
  }  
int max (struct array arr)
  {
      int max = arr.a[0];
      for (int i=1;i<arr.length;i++)
        {
            if (arr.a[i]>max)
                max = arr.a[i];
        }
        return max;
  }
int min (struct array arr)
  {
      int min = arr.a[0];
      for (int i=1;i<arr.size;i++)
        {
            if (arr.a[i]<min)
                min = arr.a[i];
        }
        return min;
  }
int sum (struct array arr)
  {
      int s = 0;
      for (int i=0;i<arr.length;i++)
          s += arr.a[i];
      return s;
  }
float avg (struct array arr)
  {
      return (float )sum(arr) / arr.length;
  }
void display(struct array arr)
  {

      for (int i=0;i<arr.length;i++)
         printf("%d\t",arr.a[i]);
  }
int main ()
  {
     struct array arr ={{2,3,4,5,6},5,10};
     printf("get() = %d\n",get(arr,0));
     set(&arr,0,15);
     printf("max() = %d\n",max(arr));
     printf("min() = %d\n",min(arr));
     printf("sum() = %d\n",sum(arr));
     printf("avg() = %d\n",avg(arr));
     display(arr);
  }