//
// Created by crz on 2023/10/8.
//
#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    int n;
    scanf("%lf%d",&x,&n);
    double sum=0;
    for(int i=0;i<=n;i++)
    {
        if(i%2==1)
        {
            sum=sum-(pow(x,2*i+1))/(2*i+1);
        }
        else
        {
            //printf("%lf we\n",(pow(x,2*i+1))/(2*i+1));
            sum=sum+((pow(x,2*i+1))/(2*i+1));
        }
    }
    printf("%.10lf",sum*4);
}