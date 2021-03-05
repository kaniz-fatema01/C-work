#include<stdio.h>

int main()
{
    int a,b;
   int x;
   printf("Row: ");
   scanf("%d", &a);
   printf("Colum: ");
   scanf("%d", &b);
   printf("Symbol: ");
   scanf("%d", &x);


  for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d",x);
        }

        printf("\n");
    }

return 0;
}


