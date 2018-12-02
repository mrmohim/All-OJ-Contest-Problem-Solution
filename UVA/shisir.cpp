#include<iostream>
#include<cstdio>
#define sc scanf
#define pf printf
#define mx 100001
#include<algorithm>
typedef long long li;
using namespace std;
int ar[mx];
int main()
{
    li a,b,c,m,n,i,j;
    while(sc("%lld",&n)==1)
    {
        for(i=0; i<n; i++)
            sc("%lld",&ar[i]);
        sc("%lld",&m);
        sort(ar,ar+n);
        for(i=0; i<n; i++)
        {
            if(ar[i]+ar[n--]==m)
            {
                a=ar[i];
                b=ar[i+1];
            }
        }
        pf("Peter should buy books whose prices are %lld and %lld.\n\n",a,b);
    }
}
