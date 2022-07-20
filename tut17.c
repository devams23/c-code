#include <stdio.h>
int main()
{
    int x;
    for (int i = 1; i < 10; i++)
    {
        printf("%d", i);

        for (int j = 1; i < 10; j++)
        {
            printf("%d\nEnter any no :",j);
            scanf("%d", &x);

            if (x == 0)
            {
                break;
            }
        }
    }
    return 0;
}
