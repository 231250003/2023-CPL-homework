//
// Created by crz on 2023/10/8.
//
#include<stdio.h>
int main()
{
    int n,sum=0,ans=0;
    scanf("%d",&n);
    int a[100001];
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(sum<i&&a[i]!=0)
        {
            ans+=i-sum;
            sum=i;
        }
        sum=sum+a[i];
    }
    printf("%d",ans);
}