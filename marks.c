/*write a c programme to input the marks of five subjects Phy,Che,Bio,Maths and computer
  Calculate percentage and grade acc to following:
   Percentage > 90% : Grade A
   Percentage > 80% : Grade B
   Percentage > 70% : Grade C
   Percentage > 60% : Grade D
   Percentage > 40% : Grade E
   Percentage < 40% : Grade F
*/
#include<stdio.h>
 int main ()
   {
       float n,p;
       printf("Enter the marks : ");
       scanf("%f",&n);
       p = (n/500)*100;
       if (p==90)
       {
           printf("\n Percentage : %f",p);
           printf("\n Grade : A ");
       }
       else if (p==80)
       {
           printf("\n Percentage : %f",p);
           printf("\n Grade : B ");
       }
        else if (p==70)
        {
            printf("\n Percentage : %f",p);
            printf("\n Grade : C ");
        }
        else if (p==60)
        {
            printf("\n Percentage : %f",p);
            printf("\n Grade : D ");
        }
        else if (p==40)
        {
            printf("\n Percentage : %f",p);
            printf("\n Grade : E ");
        }
        else
        {
            printf("\n Percentage : %f ",p);
            printf("\n Grade : F ");
        }
        

   }
 