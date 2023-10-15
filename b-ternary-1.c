//
// Created by crz on 2023/10/14.
//
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    int n;
    char a[20];
    int sum;
    scanf("%d",&n);
    getchar();
    for(int i=1;i<=n;i++)
    {
        int t=1;
        sum=0;
        gets(a);
        int flag=1;
        for(int j= strlen(a)-1;j>=0;j--)
        {
            if(a[j]!='Z'&&a[j]!='1'&&a[j]!='0')
            {
                printf("Radix Error\n");
                flag=0;
                break;
            }
            else
            {
                if(a[j]=='1') sum=sum+t;
                if(a[j]=='Z') sum=sum-t;
            }
            t=t*3;
        }
        if(flag==1) printf("%d\n",sum);
    }
}