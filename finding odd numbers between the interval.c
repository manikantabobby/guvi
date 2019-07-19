#include<stdio.h>
int main()
{
    int N,Q,i;
    scanf("%d",&N);
    scanf("%d",&Q);
    for(i=N+1;i<Q;i++)
    {
        if(i%2==1)
        printf("%d ",i);
        
    }
    return 0;
}
