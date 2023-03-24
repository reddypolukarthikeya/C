#include <stdio.h>
void swap(int x,int y)
  {
      int temp;
      temp = x;
      x = y;
      y = temp;
  }
void bubble_sort(int a[])
  {
      int i,j,flag=0;
      for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1-i;j++)
              {
                  if(a[j]>a[j+1])
                    {
                        swap(a[j],a[j+1]);
                        flag = 1;
                    }    
              }
        }
  }