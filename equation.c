#include<stdio.h>
#include<math.h>
double cubic(double x)
{
    int y;
    int q=-abs(x)-1;
    int s=abs(x)+1;
    for(int i=q;i<=s;i++)
    {
        if(i*i*i<=x&&(i+1)*(i+1)*(i+1)>=x)
        {
            y=i;
            break;
        }
    }
    for(double i=y;i<=y+1;i=i+0.0001)
    {
        if(pow(i,3)-x<=0&&pow(i+0.0001,3)-x>=0)
        {
            if(abs(pow(i,3)-x)>=abs(pow(i+0.0001,3)-x))
            {
                return i+0.0001;
            }
            else
            {
                return i;
            }
        }
    }
}
int main()
{
    double p,q;
    double ans;
    scanf("%lf%lf",&p,&q);
    double der;
    der=sqrt(pow(q/2,2)+pow(p/3,3));
    ans=cubic(-q/2+der)+cubic(-q/2-der);
    printf("%.3lf",ans);
}