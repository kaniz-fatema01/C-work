//odd even sum
#include<stdio.h>

int main()
{
    int a;
   printf("a: ");
   scanf("%d", &a);
   int temp,sum;

   while(a!=0)
   {
       temp = a%10;
       if(temp%2==0)
       {
         sum= sum+6;
       }
       else
       {
           sum= sum+5;
       }
       a= a/10;
   }

    printf("%d",sum);
   return 0;
}


