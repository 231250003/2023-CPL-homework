//
// Created by crz on 2023/9/23.
//
#include<stdio.h>
#include<math.h>
int main()
{
    double p,q;
    double ans;
    scanf("%lf%lf",&p,&q);
    double der;
    der=sqrt(pow(q/2,2)+pow(p/3,3));
    ans=cbrt(-q/2+der)+cbrt(-q/2-der);
    printf("%.3lf",ans);
}