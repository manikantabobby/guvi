#include <stdio.h>

int main()
{
    int N,A,D,sum;
    scanf("%d",&N);
    scanf("%d",&A);
    scanf("%d",&D);
    sum=(N*(2*A+(N-1)*D))/2;
    printf("%d",sum);
    return 0;
}
