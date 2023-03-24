#include <stdio.h>
struct array
  {
      int a[10];
      int size;
      int length;
  };
int rbs(int a[],int l,int h,int key)
  {
      int mid=0;
      if(l<=h)
        {
            mid = (l+h)/2;
            if(key == a[mid])
              return mid;
            else if(key < a[mid])
              return rbs(a,l,mid-1,key);
            else 
              return rbs(a,mid+1,h,key);
        }
        return -1;
  }
int main () 
  {
      struct array arr = {{2,3,4,5,6},10,5};
      printf("%d",rbs(arr.a,0,arr.length,9));
  }