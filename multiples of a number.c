#include<stdio.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
      k=n*i;
      printf("\t%d",k);
    }
    return 0;
    
}
