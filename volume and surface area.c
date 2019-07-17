#include<stdio.h>
int main()
{
    int L,B,H,s,v;
    scanf("%d",&L);
    scanf("%d",&B);
    scanf("%d",&H);
    s=2*(L*B+B*H+H*L);
    v=L*B*H;
    printf("%d",s);
    printf("\t%d",v);
    return 0;
}
