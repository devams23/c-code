#include <stdio.h>
int main()
{

   int x, j, pro = 1;

   for (j = 1; j <= 10; j++)
   {

      printf(" no %d:", j);
      scanf("%d", &x);

      pro *= x;
   }
   printf("The product of 10 no is:%d ", pro);
   return 0;
}