#include <stdio.h>
int main()
{
    int h,w;
    printf("Input h: ");
    scanf("%d", &h);

    printf("Input w: ");
    scanf("%d", &w);

    float area;
    area=.5*h*w;
    printf("Triangle area: %.2f\n", area);

    return 0;
}
