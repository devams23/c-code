#include <stdio.h>
int main()
{

    int i, a, pro = 1;
    printf("ENTER THE NO YOU WANT THE FACTORIAL OF:");
    scanf("%d", &a);

    for (i = 1; i<= a; i++)
    {
        pro *= i;
    }

    printf("%d!=%d", a, pro);
           
    return 0;
}