#include<stdio.h>
int main()
{
    int a,e,i,k=1;
    scanf("%d%d",&a,&e);
    for(i=0;i<e;i++)
    {
        k=k*a;
    }
    printf("%d",k);
    return 0;
}

