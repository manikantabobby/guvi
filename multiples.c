#include<stdio.h>
int main()
{
    int n,i,m;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
     m=n*i;  
     printf("\t%d",m);
    }
    return 0;
}
