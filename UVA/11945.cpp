#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std ;
int main()
{
    int i,j,t,m;
    double n,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        s=0;
        for(j=1;j<=12;j++)
        {
            scanf("%lf",&n);
            s+=n;
        }
        s/=12;
        m=(int)s;
        m/=1000;
        if(m!=0)
            printf("%d $%d,%.2lf\n",i,m,s-(m*1000));
        else
            printf("%d $%.2lf\n",i,s);
    }
    return 0 ;
}
