/* ===================================*/
/* Author :   Moshiur Rahman Mohim    */
/* Email  :   mtmohim74@gmail.com     */
/* Institute: HSTU                    */
/* ===================================*/

#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>

#include <algorithm>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <set>
using  namespace  std;

const int INF = 0x7f7f7f7f;

#define pi              acos(-1.0)
#define mod             1000000007
#define MAX             10000
#define FOR(i, b, n)    for(LL i=b; i<=n; i++)
#define FORR(i, n, b)   for(LL i=n; i>=b; i--)
// Library.
#define mem(a,b)        memset(a,b,sizeof(a))
#define Sort(x)         sort(x.begin(),x.end())
#define Reverse(x)      reverse(x.begin(),x.end())
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        (a * (b / gcd(a,b)))
#define sq(x)           (x)*(x)
// File.
#define READ(f)         freopen(f, "r", stdin)
#define WRITE(f)        freopen(f, "w", stdout)
// i/o.
#define sf              scanf
#define pf              printf
#define pr1(x)          cout<<x<<"\n"
#define pr2(x,y)        cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z)      cout<<x<<" "<<y<<" "<<z<<"\n"
// Test Case.
#define TEST(i,t)       LL i,t;scanf("%lld",&t);for(i=1;i<=t;i++)

typedef unsigned int            U;
typedef long int                L;
typedef unsigned long int       LU;
typedef long long int           LL;
typedef unsigned long long int  LLU;
typedef float                   F;
typedef double                  LF;
typedef char                    C;

//STL
typedef vector<LL>vl;
typedef pair<int,int>pii;
typedef pair<string,int>psi;
typedef pair<LL,LL>pll;
typedef pair<LF,LF>pdd;
typedef vector<pii> vpii;

// Compute b^p%m
int BigMod(LL B,LL P,LL M)
{
    LL R=1;
    while(P>0)
    {
        if(P%2==1)
            R=(R*B)%M;
        P/=2;
        B=(B*B)%M;
    }
    return (int)R;
}

/*............End............*/
/*.......Global Declaration.......*/
LL arm1[1501],arm2[1501],arw1[1501],arw2[1501],a[1501],b[1501];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL q,c,d,x,y,z,m,n,s,mm,mw;
    TEST(tt,t)
    {
        sf("%lld%lld",&n,&q);
        s=0;
        mm=0;
        mw=0;
        FOR(i,1,q)
        {
            sf("%lld%lld%lld",&m,&a[i],&b[i]);
            if(a[i]>b[i])
                    swap(a[i],b[i]);
            x=0;
            if(m==1)
            {
                mm+=1;
                arm1[mm]=a[i];
                arm2[mm]=b[i];
                FOR(j,1,mw)
                {
                    if()
                    {
                        x=+1;
                    }
                }
            }
            else
            {
                mw+=1;
                arw1[mw]=a[i];
                arw2[mw]=b[i];
                FOR(j,1,mm)
                {
                    if()
                    {
                        x=+1;
                    }
                }
            }
            pf("%lld\n",x);
            s+=(i*x);
        }
        pf("%lld\n",s);
    }
    return 0;
}
