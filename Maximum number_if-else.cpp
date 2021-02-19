//Maximum number_if-else
#include<stdio.h>

int main()
{
    int a,b,c,Result;
   printf("First number, A : ");
   scanf("%d", &a);
   printf("Second number, B : ");
   scanf("%d", &b);
   printf("Third number, C : ");
   scanf("%d", &c);
   if(a>b)
   {
       if(a>c)
       {
           printf("A is largest");
       }
       else
       {
           printf("C is largest");
       }

   }
   else
       {
           if(b>c)
           {
               printf("B is largest");
           }
           else
           {
               printf("C is largest");
           }
       }
return 0;
}

