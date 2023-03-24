#include<stdio.h>
#define max 5
int rear = -1, front = -1;
int arr[max],item;
void addq(int item)
  {
      if (rear==max-1)
         printf("\nQueue is full");
      rear++;
      arr[rear]=item;
      if(front==-1)
            front=0;   
  }
int delq()
  {
      int data;
      if(front == -1)
      {
         printf("Queue is Empty");
         return 0;
      }
      data = arr[front];
      front++;  
      if (front == rear)
      {
          front = -1;
          rear =  -1;
      }
      return (data);
  }
void display ()
 {
     int i;
     if (front==-1)
        printf("Queue is Empty\n");
    else
    {
        for(i=0;i<=max-1;i++)
            printf("%d-->",arr[i]);
    }
 }
int main ()
  {
      int ch,n;
      do
      {
         printf("\n\t MENU\n\t1.ADD\n\t2.DELETE\n\t3.DISPLAY\n\t4.EXIT\n");
         printf("Enter your choice : [ ]\b\b");
         scanf("%d",&ch);
         switch(ch)
         {
             case 1 :
                  printf("\nEnter the element : ");
                  scanf("%d",&item);
             break;
             case 2 :
                n = delq();
                  printf("\nThe deleted element is %d",n);
             break;
             case 3 :
                   display();
            break;
         }
      }while(ch!=4);
    return 0 ;
  }
