//Sum of series in while loop
#include<stdio.h>

int main()
{
    int a,i,Result;
   printf("How many number of sum do you want: ");
   scanf("%d", &a);
   Result=0;
   i=0;

   while(i<=a)
   {
       Result=Result+i;
       i++;
   }
   printf("Total sum= %d",Result);

return 0;
}
