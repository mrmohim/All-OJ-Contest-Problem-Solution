#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    long long n,m,t,i;
    double p,s,s1,s2,x;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld%lf",&m,&p);
        i=s1=s2=0;
        s=1000000000;
        for(t=m-1; t>=0; t--)
        {
            i+=1;
            x=s*pow(p,t);
            if(i%2==1)
                s1+=x;
            else
                s2+=x;

            s=1000000000-x;
        }
        printf("%.1lf %.1lf\n",s1,s2);
    }
    return 0;
}
