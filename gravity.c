//
// Created by crz on 2023/9/22.
//
#include<stdio.h>
int main()
{
    double G=6.674e-11;
    double M=77.15;
    float m,r;
    scanf("%e%e",&m,&r);
    //printf("%e\n",G);
    //double t=(G*m*M)/(r*r);
    printf("%.3e",(G*m*M)/(r*r));
}