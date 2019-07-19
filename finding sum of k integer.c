#include<stdio.h>
int main()
{
    int K,N,arr[100],sum=0,i;
    scanf("%d",&N);
    scanf("%d",&K);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        if(i<K)
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
