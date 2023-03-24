//write a c program to read a string from standard input device
#include<stdio.h>
int main ()
{
    int k;
    char a[30],b[30];
    do
    {
        
        printf("\n\n\n\t\t\t******MENU*******\n\n\t\t1.ONE WORD STRING\
                \n\t\t2.ONE LINE STRING\n\t\t3.EXIT \n\n\n\t\t\tYour choice [ ]\b\b");
        scanf("%d",&k);
        switch(k)
        {
            case 1 :
                
                printf("\nEnter a string :\n");
                scanf("%s",&a);
                printf("\nYour string : %s",a);
            break;
            case 2 :
                
                printf("\nEnter a string :\n");
                gets(b);
                puts("\nYour string is :");
                puts(b);
            break;
        }
    }while(k!=3);
  
}