#include <stdio.h>
struct array 
  {
     int a[10];
     int size;
     int length;
  };

int bs(struct array arr,int key)
  {
      int l=0,mid,h;
      h =arr.length-1;
      while (l<=h)
        {
            mid = (l+h)/2;
            if (key == arr.a[mid])  
                return mid;
            else if (key < arr.a[mid])
                h = mid - 1;
            else 
                l = mid + 1;
        }
        return -1;
  }
int main ()
  {
       struct array arr = {{2,3,4,5,6},10,5};
       printf("%d\n",bs(arr,10));
  }