//write a c program to explain the working of functoins with arguments without return values
#include<stdio.h>
void format(char);
int main ()
{
    format('&');
    puts("\nPolu Karthikeya Reddy");
    format('*');
    puts("\nSVCE-IT");
    format('^');
    puts("\nTirupati");
    format('#');
    puts("\nAP");
    format('@');
}
void format (char ch)
{
    int i;
    for(i=1;i<=15;i++)
     printf("%c",ch);
    printf("\n");

}