#include <stdio.h>
int main()
{
    int C;
    float F;

    printf("Input temperature in Celsius: ");
    scanf("%d", &C);

    F=(C*9/5.0)+32;

    printf("Temperature in Fahrenheit : %.1f\n", F);
    return 0;
}
