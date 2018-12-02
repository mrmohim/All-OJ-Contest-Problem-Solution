#include<iostream>
#include<cstdio>
#define sc scanf
#define pf printf
#define mx 100001
#include<algorithm>
typedef long long li;
using namespace std;
li ar[mx];
int main()
{
    li a,b,m,n,i,j,s,x,y,sum,c=0;
    while(sc("%lld",&n)==1)
    {
        s=10000000009;
        for(i=0; i<n; i++)
            sc("%lld",&ar[i]);
        sc("%lld",&m);
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(ar[i]+ar[j]==m)
                {
                    a=ar[i];
                    b=ar[j];
                    if(a>b)
                        swap(b,a);
                    sum=b-a;
                    if(sum<s)
                    {
                        x=b;
                        y=a;
                    }
                    s=sum;
                }
            }
        }
        pf("Peter should buy books whose prices are %lld and %lld.\n\n",y,x);
    }
}
