#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int len1,len2;
    scanf("%s",str1);
    scanf("%s",str2);
    len1=strlen(str1);
    len2=strlen(str2);
    if(len1>len2)
    {
        printf("%s",str1);
    }
    else
    {
        printf("%s",str2);
    }
    return 0;
}
