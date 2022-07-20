#include <stdio.h>
int main()
{
    int m;
    printf("Enter the Month No:");
    scanf("%d", &m);
    switch (m)
    {
    case 8:
        printf("There are 31 days in this year");
        goto end;
    case 2:
        printf("there are 28 days");
        goto end;
    case 9:
        printf("There are 30 days in this year");
        goto end;
    case 10:
        printf("there are 31 days");
        goto end;
    case 11:
        printf("There are 30 days in this year");
        goto end;
    case 12:
        printf("there are 31 days");
        goto end;
    }

    if (m > 12)
    {
        printf(" This is not a valid month.");
    }
    else if (m % 2 == 0)

    {
        printf("There are 30 days in this year");
    }
    else
        printf("There are 31 days in this year");
end:
    return 0;
}