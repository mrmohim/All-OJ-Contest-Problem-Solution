#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c,d,m,n;
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        m=(((2*a*c)-(c*sqrt(2*(a*a+b*b))))/2)/(a-b);
        n=(m*d)/c;
        printf("Land #%d: %.6lf %.6lf\n",i,m,n);
    }
    return 0;
}
