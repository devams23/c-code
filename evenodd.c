#include <stdio.h>
void check()
{
    int a;
    printf("enter a no:");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("it is even ");
    }
    else
    {
        printf("it is odd");
    }
}

int main()
{

    check();

    return 0;
}