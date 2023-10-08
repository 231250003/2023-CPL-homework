//
// Created by crz on 2023/10/8.
//
#include<stdio.h>
int main()
{
    int n,ans;
    scanf("%d",&n);
    int max1;
    ans=0;
    max1=n;
    while(n!=1)
    {
        if(n%2==0)
        {
            if(n>max1)
            {
                max1=n;
            }
            n=n/2;
            ans=ans+1;
        }
        else
        {
            if(n>max1)
            {
                max1=n;
            }
            n=n*3+1;
            ans=ans+1;
        }
    }
    printf("%d %d",ans,max1);
}