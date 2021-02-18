//Sum of series
#include<stdio.h>

int main()
{
    int a,i,Result;
   printf("How many number of sum do you want: ");
   scanf("%d", &a);
   Result=0;

   for(i=1;i<=a;i++)
   {
       Result=Result+i;
   }
   printf("Total sum= %d",Result);

return 0;
}
