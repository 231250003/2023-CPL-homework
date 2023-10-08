//
// Created by crz on 2023/10/8.
//
#include<stdio.h>
#include<string.h>
int main()
{
    int n,a[100001],b[1000001];
    memset(b,0,sizeof (b));
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i++)
    {
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    for(int i=1;i<=1000000;i++)
    {
        if(b[i]==1)
        {
            printf("%d",i);
            break;
        }
    }
}