//
// Created by crz on 2023/10/8.
//
#include<stdio.h>
#include<string.h>
int main()
{
    int n,k;
    char a[100008];
    //while ((n = getchar()) != '\n' && n != EOF);
    scanf("%d",&n);
    getchar();
    gets(a);
    scanf("%d",&k);
    if(k!=0)
    {
        //printf("%c\n",a[0]);
        for(int i=0;i<=k-1;i++)
        {
            printf("%c",a[k-i-1]);
        }
    }
    if(k!=n)
    {
        for(int i=k;i<=n-1;i++)
        {
            printf("%c",a[n+k-i-1]);
        }
    }
}