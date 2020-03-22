#include <stdio.h>
#include <math.h>
#define jingdu 1e-7
#define pi 3.1415926
unsigned long fac(unsigned long n)  
{
    unsigned long i,m;
    for(i=0,m=1;i<=n;i++)
    {
        if(i!=0)
            m=m*i;
    }
    return m;
}
double fcos(double x)
{
    double temp=0.0,t=5;
    int i=0;
    while(x>=2*pi) x=x-2*pi;       //最多只有2π个弧度
    while(t>=jingdu)
    {
        t=(pow(x,2*i))/fac(2*i);
        temp+=pow(-1,i)*t;
        i++;
        //printf("%.5lf\n",temp);
    }
    return temp;
}
int main()
{
    double r,temp;
    printf("请输入弧度值，180°对应3.1415926弧度，以此类推...\n");
    printf("弧度(rad):");
    scanf("%lf",&r);
    temp=fcos(r);
    printf("%.5lf\n",temp);
    printf("%.51f\n",cos(r));//用系统函数进行对比
}