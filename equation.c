#include <stdio.h>
int main()
{
    char o;

    float a, b,sum,pro,div,sub;
    printf("{Enter the value of a} {SIGN} {Enter the value of b}: ");
    scanf("%f %c %f", &a,&o,&b);
    
    sum= a+b;
    pro=a*b;
    sub=a-b;
    div=a/b;

    switch (o)
    {
        case '+':
        printf("Result =%f",sum);
        break;
        case '-':
        printf("Result =%f",sub);
        break;
        case '*':
        printf("Result =%f",pro);
        break;
        case '/':
        printf("Result =%f",div);
        break;

    }
    return 0;
}