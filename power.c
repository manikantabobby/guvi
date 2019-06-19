#include <stdio.h>
int main()
{
    int N,K;
    long long result = 1;

    printf("INPUT:");
    scanf("%d", &N);
    scanf("%d", &K);

    while (K!=0)
    {
        result=result*N;
        --K;
    }

    printf("OUTPUT:\n%lld",result);

    return 0;
}
