#include<stdio.h>
int main()
{
    int N,K,arr[30],i;
    scanf("%d",&N);
    scanf("%d",&K);
    for(i=0;i<N;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    printf("%d",arr[K-1]);
    return 0;
}
