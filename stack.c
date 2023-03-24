//STACK
#include<stdio.h>
#define max 5
int top=-1,item,stack[max];
void push (int item)
{
   if(top==max-1)
       printf("\nThe stack is Full\n");
   else
     {
        top++;
        stack[top] = item;
     }
}
int pop ()
{
    int item;
    if(top==-1)
       printf("\nThe stack is Empty\n");
    else
     {
        item = stack[top];
        top--; 
     }
     return item;
}
void disp()
{
    int i;
    if(top==-1)
       printf("\nThe stack is Empty\n");
    else
    {
      for(i=top;i>=0;i++)
         printf("%d\t",stack[i]);
    }
}
int main ()
 {
     int ch,i;
     do
     {
         printf("\n\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT");
         printf("\nEnter your choice: ");
         scanf("%d",&ch);
         switch(ch)
         {
            case 1 :
                printf("\nEnter the element");
                scanf("%d",&item);
                push(item);
            break;
            case 2 :
                printf("\nElement popped out is %d",pop());
            break;
            case 3:
                disp();
            break;
         }
     }while(ch!=4);
 }