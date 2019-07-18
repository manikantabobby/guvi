#include<stdio.h>
int main()
{
    int N,K,i,G;
    scanf("%d",&N);
    scanf("%d",&K);
    for(i=1;i<=N&&i<=K;i++)
    {
        if(N%i==0&&K%i==0)
        G=i;
    }
    printf("%d",G);
    return 0;
}
