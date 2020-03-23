#include <stdio.h>
#include <math.h>
#define jingdu 1e-7
#define pi 3.1415926
_int64 fac(unsigned long n)  
{
    _int64 m; int i;
    for(i=0,m=1;i<=n;i++)
    {
        if(i!=0)
            m=m*i;
    }
    return m;
}
long double fcos(double x)
{
   long double temp=0.0,t=5;
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
long double fsin( double x)
{
   long  double temp=0.0,t=5;
    int i=0;
    while(x>=2*pi) x=x-2*pi;       //最多只有2π个弧度
    while(t>=jingdu)
    {
        t=(pow(x,(2*i+1)))/fac(2*i+1);
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
    printf("fcos=%.5lf\n",temp);
    printf("cos=%.51f \n",cos(r));//用系统函数进行对比
	printf("fsinx=%.5lf\n",fsin(r));
    printf("sinx=%.51f\n",sin(r));//用系统函数进行对比

}