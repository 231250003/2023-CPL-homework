//
// Created by crz on 2023/10/14.
//
#include<stdio.h>
int main()
{
    int n;
    char a[2010];
    scanf("%d",&n);
    getchar();
    for(int i=1;i<=n;i++)
    {
        scanf("%c",&a[i]);
    }
    for(int i=1;i<=(n/2);i++)
    {
        if(a[i]=='?') a[i]=a[n+1-i];
        if(a[n+1-i]=='?') a[n+1-i]=a[i];
    }
    for(int i=1;i<=n;i++)
    {
        printf("%c",a[i]);
    }
}