#include<stdio.h>


int main()
{

int num;    
printf("Enter the number you want the multiplication table of :");
scanf("%d", &num);
printf("\n");
printf("Multiplication table of %d is :\n" , num);
printf("\n");


for(int i = 1; i< 11; i++)
{
    printf("%d x %d = %d\n", num,i,num*i);
}

 
 
 return 0;

 
}

 
