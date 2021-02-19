//multiplication table
#include<stdio.h>

int main()
{
    int a,b ,i,Result;
   printf("How many numbers of multiplication do you want: ");
   scanf("%d", &a);
   printf("multiply till : ");
   scanf("%d", &b);


   for(i=1;i<=b;i++)
   {

       printf("%d * %d = %d \n", a, i, a * i);

   }
return 0;
}
