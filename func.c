#include <stdio.h>
int sum()
{
   int a, b, sum;
   printf("enter 2 nos:");
   scanf("%d %d", &a, &b);
   sum = a + b;
   printf("sum is:%d\n", sum);
}
int main()
{
   sum();
   sum();

   return 0;
}