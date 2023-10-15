//
// Created by crz on 2023/10/14.
//
#include<stdio.h>
int main()
{
    int t,n,tempt1,tempt2,a;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        tempt1=-1;
        scanf("%d",&n);
        getchar();
        for(int j=1;j<=n;j++)
        {
            scanf("%d",&a);
            if(a>tempt1) tempt1=a;
            if(j==n) tempt2=a;
        }
        getchar();
        if(tempt1==tempt2) printf("Yes");
        else printf("No");
        if(i!=t) printf("\n");
    }
}