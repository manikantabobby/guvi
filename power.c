#include <stdio.h>
int main()
{
    int base, exponent;
    long long result = 1;

    printf("Input: ");
    scanf("%d", &base);

    printf("\t");
    scanf("%d", &exponent);

    while (exponent != 0)
    {
        result =result*exponent;
        --exponent;
    }

    printf("Output:%lld",result);

    return 0;
