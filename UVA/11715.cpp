#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n,i=0;
    double a,s,u,v,t;
    while(scanf("%d",&n)!=EOF && n!=0)
    {
        i+=1;
        if(n==1)
        {
            cin>>u>>v>>t;
            a=(v-u)/t;
            s=(u*t)+(0.5*a*t*t);
            printf("Case %d: %.3lf %.3lf\n",i,s,a);
        }
        else if(n==2)
        {
            cin>>u>>v>>a;
            t=(v-u)/a;
            s=(u*t)+(0.5*a*t*t);
            printf("Case %d: %.3lf %.3lf\n",i,s,t);
        }
        else if(n==3)
        {
            cin>>u>>a>>s;
            v=sqrt((u*u)+(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,v,t);
        }
        else if(n==4)
        {
            cin>>v>>a>>s;
            u=sqrt((v*v)-(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,u,t);
        }
    }
    return 0;
}
