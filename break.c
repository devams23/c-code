#include <stdio.h>
int main()
{
 int i,mul1,mul2,x;
 printf("Enter the first no for which you want the multiple of 3 & 5 :");

 scanf("%d",&x);
  printf("First %d multiples of 3 and 5 is:\n",x);
  for ( i = 1; i <=x; i++) {
    mul1 = 3*i;
    mul2= 5*i;
    
    printf("%d %d\n",mul1,mul2);
    

    
    
  
}
    return 0;
}