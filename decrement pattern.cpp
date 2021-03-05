#include<stdio.h>

int main()
{
    int a,b;
   int x;
   printf("Row: ");
   scanf("%d", &a);
   /*printf("Colum: ");
   scanf("%d", &b);
   printf("Symbol: ");
   scanf("%d", &x);*/


  for(int i=a;i>=1;--i)
    {
        for(int j=1;j<=i;++j)
        {
            printf("%d", j);
        }

        printf("\n");
    }

return 0;
}


