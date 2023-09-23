//
// Created by crz on 2023/9/22.
//
#include<string.h>
#include <stdio.h>
int main()
{   int a3,a5,a6,a7,a2;
    char a1[101],a4[101]; //单个字符用%c，字符数组用%s
    scanf("%s%d%d%s%d%d%d",&a1,&a2,&a3,&a4,&a5,&a6,&a7);
    printf("%c%c%c %c%c%c %02d %02d:%02d:%02d %04d",a4[0],a4[1],a4[2],a1[0],a1[1],a1[2],a2,a5,a6,a7,a3);
}