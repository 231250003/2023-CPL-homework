#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
bool pd(char *c)
{
    for(int i=0;i<strlen(c);i++)
    {
        if(((c[i]<'0')||(c[i]>'9'))&&c[i]!='-')
            return false;
    }
    return true;
}
int main()
{
    int n;
    scanf("%d",&n);
    //getchar();
    for(int i=1;i<=n;i++)
    {
        char b[41];
        char stringthree[41];
        char stringthree2[41];
        int weishu;
        getchar();
        //fgets(b, sizeof(b),stdin);
        scanf("%s",&b);
        //gets(b);
        if(pd(b)==false)
        {
            printf("Radix Error\n");
        }
        else if (b!='\n'&&atoi(b)==0)  printf("0\n");
        else {
            for(int p=0;p<=41;p++)
            {
                stringthree2[i]=' ';
                stringthree[i]=' ';
            }
            memset(stringthree2,' ',sizeof(stringthree2));
            memset(stringthree,' ',sizeof (stringthree));
            int cur = 0;
            int  convert = atoi(b);
            convert = abs(convert);
            //printf("%d\n",convert);
            weishu = 0;
            while (convert >= 1) {
                weishu = convert % 3;
                stringthree[cur] = (char) (weishu + 48);
                //printf("%c\n",stringthree[cur]);
                convert = convert / 3;
                cur++;
            }//printf("%d\n", strlen(stringthree));
            //printf("%s",stringthree);
            for (int k = 1; k <= strlen(stringthree); k++) {
               stringthree2[k] = stringthree[strlen(stringthree) - k];
            }
            //printf("%s\n",stringthree2);
            for (int j = strlen(stringthree); j >= 1; j--) {
                if (stringthree2[j] == '2') {
                    stringthree2[j] = 'Z';
                    if (stringthree2[j - 1] == 'Z') {
                        stringthree2[j - 1] = '0';
                    } else {
                        if (stringthree2[j-1] != ' ') stringthree2[j - 1] = (char) (stringthree2[j - 1] + 1);
                        else stringthree2[j - 1] = '1';
                    }
                }
                if (stringthree2[j] == '3') {
                    stringthree2[j] = '0';
                    if (stringthree2[j-1] ==' ') {
                        stringthree2[j - 1] = '1';
                    } else {
                        stringthree2[j - 1] = (char) (stringthree2[j - 1] + 1);
                    }
                }
            }
            if (b[0] == '-') {
                for (int k = 0; k <= strlen(stringthree2); k++) {
                    if (stringthree2[k] == 'Z') stringthree2[k] = '1';
                    else if (stringthree2[k] == '1') stringthree2[k] = 'Z';
                }
            }
            int t;
            char string3[41];
            //printf("%s\n",stringthree2);
            {
                for (int k = 0; k <= strlen(stringthree2); k++) {
                    if (stringthree2[k] != ' ')
                    {
                        //printf("%c",stringthree2[k]);
                        t=k;
                        break;
                    }
                }
                int pi=0;
                for (int k = t; k <= strlen(stringthree2); k++)
                {
                    string3[pi++]=stringthree2[k];
                }
                printf("%s\n",string3);
            }
        }
    }
}