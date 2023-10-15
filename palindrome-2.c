//
// Created by crz on 2023/10/15.
//
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    char a[101];
    scanf("%d",&n);
    getchar();
    for(int i=1;i<=n;i++)
    {
        scanf("%c",&a[i]);
    }
    //gets(a);
    for(int i=1;i<=n;i++)
    {
        if(a[i]=='?'&&a[n+1-i]!='?')
        {
            a[i]=a[n+1-i];
        }
        if(a[i]!='?'&&a[n+1-i]=='?')
        {
            a[n+1-i]=a[i];
        }
    }
    int cur=99;
    for(int i=1;i<=n/2;i++)
    {
        if(a[i]=='?')
        {
            if(cur>=10)
            {
                printf("%d",cur);
            }
            else
            {
                printf("%d%d",cur,0);
            }
            cur--;
        }
        else printf("%c",a[i]);
    }
    cur++;
    for(int i=(n/2)+1;i<=n;i++)
    {
        if(a[i]=='?')
        {
            if(cur>=10)
                if(cur%10!=0) printf("%d",(cur%10)*10+cur/10);
                else printf("%d%d",0,cur/10);
            else
            {
                printf("%d%d",0,cur);
            }
            cur++;
        }
        else printf("%c",a[i]);
    }
    //printf("%s",a);
}