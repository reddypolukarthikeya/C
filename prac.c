#include <stdio.h>
void merge(int a[],int l,int h)
{
   int mid = (l+h)/2;
   int i=l,j=mid+1,k=l;
   int temp[10];
   while (i<=mid && j<=h)
   {
       if (a[i] < a[j])
          temp[k++] = a[i++];
       else 
          temp[k++] = a[j++];
   }
   for(;i<=mid;i++)
     temp[k++] =a[i];
    for(;j<=mid+1;j++)
      temp[k++] =a[j];
   for(i=0;i<h;i++)
      a[i]=temp[i];
}
int main ()
{
    int a[8]={1,2,3,4,5,8,9};
    merge(a,0,7);
    for(int i=0;i<7;i++)
      printf("%d ",a[i]);
}