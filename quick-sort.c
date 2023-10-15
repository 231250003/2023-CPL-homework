//
// Created by crz on 2023/10/15.
//
#include<stdio.h>
int main()
{
    int n,k;
    int a[1001];
    scanf("%d%d",&n,&k);
    getchar();
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    getchar();
    int pivot=a[k-1];
    int l=0,r=n-1;
    while(l!=r)
    {
        if(a[l]>=pivot&&a[r]<pivot)
        {
            int tempt=a[l];
            a[l]=a[r];
            a[r]=tempt;
            l++;
            r--;
        }
        else if(a[l]>=pivot&&a[r]>=pivot)
        {
            r--;
        }
        else if(a[l]<pivot&&a[r]<pivot)
        {
            l++;
        }
        else
        {
            l++;
            r--;
        }
    }
    /*for(int i=0;i<=n-1;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");*/
    int t=-1;
    int flag=1;
    for(int i=0;i<=n-1;i++)
    {
        if(a[i]>pivot&&flag==1)
        {
            flag=0;t=i;
        }
        if(a[i]==pivot)
        {
            if(t!=-1)
            {
                int tempt2=a[i];
                a[i]=a[t];
                a[t]=tempt2;
            }
            break;
        }
    }
    for(int i=0;i<=n-1;i++)
    {
        printf("%d ",a[i]);
    }
}