#include<iostream>
#include<stdio.h>
 
 using namespace std;

 int main ()

{
    int A[10]={0,1,2,3,4,5,6};

    for(int x:A)
    {
        cout<<x<<endl;
    }
    return 0;
}