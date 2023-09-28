#include <stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char ch;

    scanf("%d %f %lf %c", &a, &b, &c, &ch);

    printf("Integer = %d\n", a);
    printf("Float = %.2f\n", b);
    printf("Double = %.4lf\n", c);
    printf("Character = %c\n", ch);

    return 0;
}
