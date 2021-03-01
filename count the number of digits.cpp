//count the number of digits
#include<stdio.h>

int main()
{
    int a;
   printf("a: ");
   scanf("%d", &a);
   int count=0;

   while(a!=0)
   {
       a /=10;
       count++;
   }

    printf("%d",count);
   return 0;
}

