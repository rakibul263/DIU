#include <stdio.h>
int main()
{
    int r;
    float pi=3.1416;

    printf("Input r: ");
    scanf("%d", &r);

    printf("Circle Area: %.2f\n", pi*r*r);

    return 0;
}
