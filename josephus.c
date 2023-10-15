//
// Created by crz on 2023/10/14.
//
#include<string.h>
#include<stdbool.h>
#include <stdio.h>
int main()
{
    int n,k;
    bool flag[501];
    for(int i=1;i<=9;i++)
    {
        for(int j=i;j<=10;j++)
        {
            int cur=0;
            n=j;
            k=i;
            memset(flag,true,sizeof(flag));
            int person_alive=j;
            int cur_number=0;
            while(person_alive>1)
            {
                cur++;
                if(cur>n) cur=cur-n;
                if(flag[cur]==true)
                {
                    cur_number++;
                }
                if(cur_number==k)
                {
                    //printf("%d\n",cur);
                    cur_number=0;
                    flag[cur]=false;
                    person_alive--;
                }
            }
            for(int t=1;t<=n;t++)
            {
                if(flag[t]==true) printf("%d %d %d\n",i,j,t);
            }
        }
    }

}
/*
 10 5 4 5 3 3 9 1 7
 1 2 3 4 5 6 7 8 9
 */