#include <stdio.h>

int main()
{
    int A,B,C,sum;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    sum=(C*(2*A+(C-1)*B))/2;
    printf("%d",sum);
    return 0;
}
