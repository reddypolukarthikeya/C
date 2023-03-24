/*
  AIM : 1) To check whether the given number is positive or negative.
        2) To check whether the give number is even or odd.
        3) To print the days of a week.
        4) To check whether the given YEAR is LEAP or NOT.
        5) To check whether the given number is Plaindrome or not.
        6) To check whether the given number is Aromstrong number or not.
        7) To print the Fibonocci series upto given number.
        8) To find the Factorial of the given number.
        9) To check whether the given number is Prime or not.
       10) To find the sum of digits of a number.
*/
#include<stdio.h>
#include<math.h>
int main ()
  {
      int n,ch,m,sum,t,a,b,f,s,i,count;
      do 
      {
        printf("\t  ******MENU******\n\t1.Positive or Negative\n\t2.Even or Odd\n\t");
        printf("3.Days of a week\n\t4.Leap Years or NOT\n\t5.Plaindrome or NOT\n\t");
        printf("6.Aromstrong or NOT\n\t7.Fibonocci Series\n\t8.Factorial\n\t9.Prime or NOT\n\t10.Sum of Digits\n\t11.EXIT\nEnter Your Choice : \n\t");
        scanf("%d",&ch);
        switch (ch)
          {
             case 1 :
                 printf("Enter n value ");
                 scanf("%d",&n);
                 if (n>=0)      
                     printf("\n The given number %d is Positive\n",n);      
                 else     
                     printf("\n The given number %d is Negative\n",n);
             break;
             case 2 :
                   printf("Enter n value ");
                   scanf("%d",&n);
                   if (n%2==0)      
                       printf("\n The given number %d is Even.\n",n);      
                   else
                       printf("\n The given number %d is Odd.\n",n);
             break;
             case 3 :                      
                     printf("Enter n value ");
                     scanf("%d",&n);
                    if (n==1)
                    
                        printf("\n Day is Sunday \n");
                    
                    else if (n==2)
                    
                        printf("\n Day is Monday.\n");
                    
                    else if (n==3)
                    
                        printf("\n Day is Tuesday.\n");
                    
                    else if (n==4)
                    
                        printf("\n Day is Wednesday.\n");
                    
                    else if (n==5)
                    printf("\n Day is Thursday.\n");
                    
                    else if (n==6)
                    
                        printf("\n Day is Friday\n");
                    
                    else if (n==7)
                    
                        printf("\n Day is Saturday\n");
                    else
                    
                        printf("\n INVALID\n");
                    
            break;
            case 4 : 
                        printf("Enter n value : ");
                        scanf("%d",&n);
                        if (n%4==0)
                        {
                            printf("\n The given year %d is a Leap year\n",n);
                        }
                        else
                        {
                            printf("\n The given year %d is Not a Leap year\n",n);
                        }
            break;
            case 5 :
                sum=0;
                printf("Enter n value: ");
                scanf("%d",&n);
                m=n;
                t=0;
                while (n!=0)
                {
                    t=n%10;
                    sum=sum*10+t;
                    n=n/10;
                }
                printf("\nReverse of the given number %d = %d\n",m,sum);
                if (m==sum)
                {
                    printf("\nThe given number %d is a plaindrome number.\n",m);
                }
                else
                {
                    printf("\nThe given number %d is Not a Plaindrome number.\n",m);
                }
            break;
            case 6 :
                printf("Enter n value : ");
                scanf("%d",&n);
                m=n;
                sum=0;
                while (n)
                {
                    t=n%10;
                    sum+=t*t*t;
                    n=n/10;
                }
                if (m==sum)
                    printf("\n The given number %d is an Aromstrong number. \n",m);
                else
                    printf("\n The given number %d is NOT an Aromstrong number. \n",m);

            break;
            case 7 :
                printf("Enter n value : ");
                scanf("%d",&n);
                a = 0;
                b = 1;
                printf("\n  %d  %d",a,b);
                s = a + b;
                while (n>=s)
                {
                    printf("  %d ",s);
                    a = b;
                    b = s;
                    s = a + b;
                }

            break;
            case 8 :
                    printf("Enter n value : ");
                    scanf("%d",&n);
                    f=1;
                    for ( i = 1; n >= i ; i++)
                    {
                        f = f * i;
                    }
                    printf("\n%d Factorial = %d",n,f);
            break;
            case 9 :
                    printf("Enter n value ");
                    scanf("%d",&n);
                    count=0;
                    for ( i=1;n>=i;i=i+1)
                    {
                        if (n%i==0)
                        {
                            count=count+1;
                        }
                        
                    }
                    if (count==2)
                    {
                        printf("The given number %d is a Prime number.\n ",n);
                    }
                    else
                    {
                        printf("The given number %d is not a Prime number.\n ",n);
                    }
                    break;
                        case 10 :
                            printf("Enter n value :");
                    scanf("%d",&n);
                    m=n;
                    sum=0;
                    while (n>0)
                    {   
                        t = n % 10 ;      
                        sum=sum+t;
                        n=n/10;
                    }
                    printf("\nThe sum of digits of given number = %d.\n",sum);
            break;
            }
        } while (ch!=11);
  }
