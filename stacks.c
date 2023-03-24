//wcp to implement the stack using array
#include<stdio.h>
#define max 5
int item,top=-1,stack[max];
void push(int item)
{
   if (top == max-1)
      printf("Stack is FULL\n");
   else
   {
       top++;
       stack[top]=item;
   }  
}
int pop()
{
    int item;
    if (top==-1)
       printf("Stack is EMPTY\n");
    else
    {
        item = stack[top];
        top--;
    }
    return(item);
}
void display()
{
    int i;
    if (top==-1)
        printf("Stack is EMPTY\n");
    else
    {
        for(i=top;i>-1;i--)
            printf("%d\t",stack[i]);    
    }
    
}
int main()
{
    int ch,item,l;
    do
    {
        printf("\n\t\tMENU\n\t1.PUSH()\
                \n\t2.POP()\n\t3.DISPLAY()\n\t4.QUIT\
                \nEnter your choice[ ]\b\b");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 :
                printf("Enter the element to insert :\n");
                scanf("%d",&item);
                push(item);
            break;
            case 2 :
                 l = pop();
                 printf("Element popped out is %d\n",l);
            break;
            case 3 :
                 display();
            break;
                 
        }
    }while(ch!=4);
}
