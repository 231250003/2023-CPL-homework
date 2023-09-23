//
// Created by crz on 2023/9/22.
//
#include<stdio.h>
int main()
{
    int y,m,d;
    scanf("%d%d%d",&y,&m,&d);
    int a=(14-m)/12;
    int b=y+4800-a;
    int c=m+12*a-3;
    int jud=d+(153*c+2)/5+365*b+b/4-b/100+b/400-32045;
    printf("%d",jud);
}