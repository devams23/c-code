#include <stdio.h>

int main()
{
    int u;
    float extra, amt, total;

    printf("Enter the total units consumed:");
    scanf("%d", &u);

    if (u <= 50)
    {

        amt = u * 0.5;
    }
    else if (u <= 150)
    {
        amt = 25 + ((u - 50) * 0.75);
    }
    else if (u <= 250)
    {
        amt = 100 + ((u - 150) * 1.2);
    }
    else
    {
        amt = 220 + ((u - 250) * 1.5);
    }
    extra = amt * 0.2;
    total = extra + amt;
    printf("Electricity bill is RS.:%f", total);

    return 0;
}
