#include<stdio.h>
int main()
{
    int i,flag,n;
    char str[30];
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i!=n;i++)
    {
        if(str[i]>=48 && str[i]<=57)
        {
            flag=1;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
