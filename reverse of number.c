#include<stdio.h>
int main()
{
    int n,y,x,num;
    scanf("%d",&n);
    y=n%10;
    x=n-y;
    num=y*10+x/10;
    printf("%d",num);
    return 0;
}
