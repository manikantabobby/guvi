#include<stdio.h>
int main()
{
    int a,b,c,k;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    k=(a*b)%c;
    printf("%d",k);
    return 0;
}
