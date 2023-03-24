//write a c program to search the given element in a list using binary search.
#include<stdio.h>
int main ()
{
    int list[20],n,element;
    int l,u,m,flag=0,i;
    printf("Enter the number of elements (in sorted order) \
            the list max = 20 \n");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(i=0;i<n;i++)
     scanf("%d",&list[i]);
    printf("\nEnter the element to be searched : \n");
    scanf("%d",&element);
    l=0;
    u=n-1;
    while(l<=u)
     {
         m=(l+u)/2;
         if(list[m]==element)
         {
             printf("The element whose value is %d is at position %d in the list \n",element,m);
             flag=1;
             break;
         }
         else
         {
             if(list[m]<element)
              l=m+1;
             else
              u=m-1;

         }
    
     }
    if(flag==0)
     printf("The element whose value is %d is not present \
     in the list\n",element);
}
 