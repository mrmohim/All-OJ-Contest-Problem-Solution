#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>

using  namespace  std;

#define mx              100005
#define FOR(i, b, n)    for(LLU i=b; i<=n; i++)

#define mem(a,b)        memset(a,b,sizeof(a))

#define sf              scanf
#define pf              printf

typedef unsigned long long int  LLU;

LLU ar[mx],ar1[500],ar2[mx];
void mohim()
{
    ar[1]=1;
    FOR(i,2,99999)
    {
        LLU n=0,m,s,x,y=1;
        m=i;
        while(1)
        {
            s=0;
            x=m;
            while(1)
            {
                s+=((m%10)*(m%10));
                m/=10;
                if(m==0)
                    break;
            }
            if(s==1)
            {
                ar[i]=y+1;
                mem(ar1,0);
                break;
            }
            if(ar1[s]!=0 || ar2[i]==1 || (s<i && ar2[s]==1))
            {
                ar2[i]=1;
                mem(ar1,0);
                break;
            }
            else
            {
                ar1[s]=1;
                y+=1;
            }
            m=s;
        }
    }
}

int main()
{
    mohim();
    LLU l,h,m=0;
    while(sf("%llu%llu",&l,&h)==2)
    {
        if(m!=0)
            pf("\n");
        m=1;
        if(h<l)
        {
            LLU t=h;
            h=l;
            l=t;
        }
        FOR(i,l,h)
        {
            if(ar[i]!=0)
            {
                pf("%llu %llu\n",i,ar[i]);
            }
        }
    }
    return 0;
}
