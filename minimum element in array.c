#include <stdio.h>

int main()
{
    int n,i,arr[30],min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}
