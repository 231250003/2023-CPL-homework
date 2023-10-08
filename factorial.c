//
// Created by crz on 2023/10/8.
//
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans=1;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        ans=(ans*i)%10007;
        sum=(sum+ans)%10007;
    }
    printf("%d",sum);
}