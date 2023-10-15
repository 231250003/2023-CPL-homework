//
// Created by crz on 2023/10/15.
//
#include<stdio.h>
#include<stdbool.h>
#include <math.h>

int main()
{
    int len,n;
    bool flag=true;
    char a[41]={" "};
    scanf("%d%d",&len,&n);
    getchar();
   for(int i=1;i<=len;i++)
   {
       scanf("%c",&a[i]);
       flag=true;
       if(n<10)
       {
           if('0'<=a[i]&&a[i]<(char)(n+48)) flag=true;
           else flag=false;
       }
       else
       {
           if(('0'<=a[i]&&a[i]<='9')||('A'<=a[i]&&a[i]<=(char)(n+55)))
               flag=true;
           else
               flag=false;
       }
       if(flag==false)
       {
           printf("Error");
           break;
       }
   }
   int sum=0;
    if(flag==true)
    {
        for(int j=len;j>=1;j--)
        {
            if('0'<=a[j]&&a[j]<='9')
            {
                sum=sum+(a[j]-48)*pow(n,len-j);
            }
            else
            {
                sum=sum+(a[j]-55)*pow(n,len-j);
            }
        }
        printf("%d",sum);
    }
}