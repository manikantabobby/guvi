#include<stdio.h>
int main()
{
    int N,i,avg,arr[100],sum=0;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&arr[i]);
       sum=sum+arr[i];
   }
   avg=sum/N;
   printf("%d",avg);
   return 0;
}
