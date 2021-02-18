//Grading scale
#include<stdio.h>

int main()
{
    int a;
   printf("Result: ");
   scanf("%d", &a);
   if(a>=80 && a<=100)
   {
       printf("Result: A+");
   }
   else if(a>=70 && a<=79)
   {
       printf("Result: A");
   }
   else if(a>=60 && a<=69)
   {
       printf("Result: A-");
   }
   else if(a>=50 && a<=59)
   {
       printf("Result: B");
   }
   else if(a>=0 && a<=49)
   {
       printf("Result: F");
   }
   else
   {
       printf("Error");
   }


return 0;
}
