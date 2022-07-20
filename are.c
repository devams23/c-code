#include <stdio.h>

float area()

{

    float r;

    printf("enter the radius:");
    scanf("%f", &r);
    return 3.14 * r * r;
}
int main()
{
    float y;
    y = area();

    y = area();
    y = area();
    y = area();
    y = area();
    y = area();
    printf("the area is %f", y);
    return 0;
}