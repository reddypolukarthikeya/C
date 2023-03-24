//write a c programme to find out the maximum in the list of numbers
#include<stdio.h>
  int main ()
    {                       
      int i,j,a[10],n,temp;
      printf("Enter the size of Array : \n");
      scanf("%d",&n);
      printf("Enter the elements of the Array : \n");
      for ( i=0; i<n; i++)
      {
        scanf("%d",&a[i]);
      }
      for ( i=0; i<n; i++)
      {
        printf("%d\t",a[i]);
      }
      
      for ( i = 0; i < n; i++)
      {
        for ( j = 0; j < (n-i-1); j++)
        {
          if(a[j]>a[j+1])
          {
            temp   = a[j];
            a[j]   = a[j+1];
            a[j+1] = temp;
          }
        }     
      }
      printf("\nThe 1st Maximum is %d",a[i-1]);
      printf("\nThe 2nd Maximum is %d",a[i-2]); 
    }