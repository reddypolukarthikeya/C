//write a c program to search the given element in the list using linear search
#include<stdio.h>
int main ()
{
    int a[10],n,i,key;
    printf("Enter the number of elements in the Array : \n");
    scanf("%d",&n);
    printf("Enter %d elements :\n",n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    printf("Enter the element to be searched : \n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
     if(a[i]==key)
    {
        printf("Element found at location : %d \n",(i+1));
        break;
    }
    if(i==n)
     printf("Element not found");
}