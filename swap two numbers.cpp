#include<stdio.h>

int main()
{
    int a,b,temp;
   printf("Number1: ");
   scanf("%d", &a);
   printf("Number2: ");
   scanf("%d", &b);

   temp= a;
   a=b;
   b=temp;
   printf("Number1: %d",a);
   printf("\n");

   printf("Number2: %d",b);



return 0;
}


