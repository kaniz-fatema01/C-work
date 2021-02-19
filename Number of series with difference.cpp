//Number of series with difference
#include<stdio.h>

int main()
{
    int a,b,i,Result;
   printf("How many number of sum do you want: ");
   scanf("%d", &a);
   printf("Difference between numbers: ");
   scanf("%d", &b);
   Result=0;

   for(i=1;i<=a;i++)
   {
       Result=Result+b;
       printf("%d ",Result );
       printf("\n");

   }


return 0;
}
