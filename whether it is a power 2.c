#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if((n/(n/2))==n/2)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
