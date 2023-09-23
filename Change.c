//
// Created by crz on 2023/9/22.
//
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans=0;
        printf("%d\n",n/50);
        ans+=n/50;
        n=n%50;
        printf("%d\n",n/20);
        ans+=n/25;
        n=n%20;
        printf("%d\n",n/10);
        ans+=n/10;
        n=n%10;
        printf("%d\n",n/5);
        ans+=n/5;
        n=n%5;
        printf("%d",n/1);
        ans+=n/1;
        n=n%1;
}