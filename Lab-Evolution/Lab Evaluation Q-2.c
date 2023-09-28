#include <stdio.h>
int main()
{
    int A, B;
    float result;

    scanf("%d %d", &A, &B);

    result=(float)((A+B)*(A-B)+(A%B))/(A*B);

    printf("Result = %.2f\n",result);
    return 0;
}
