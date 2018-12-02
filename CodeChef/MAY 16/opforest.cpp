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
LL h[100010],r[100010],art[100010],arm[100010];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,w,m,x,y,a=0,b=0,c,d,mn,s,mx=0,l,t;
    mn=INF;
    sf("%lld%lld%lld",&n,&w,&l);
    FOR(i,1,n)
    {
        sf("%lld%lld",&h[i],&r[i]);
        if(h[i]>=l)
        {
            x=0;
            y=h[i];
        }
        else
        {
            a=(l-h[i])/r[i];
            if((l-h[i])%r[i]!=0)
            {
                a+=1;
            }
            x=a;
            y=(x*r[i])+h[i];
        }
        mx+=r[i];
        art[i]=x;
        arm[i]=y;
    }
    FOR(i,1,n-1)
    {
        FOR(j,1,n-i)
        {
            if(art[j]>art[j+1])
            {
                swap(art[j],art[j+1]);
                swap(arm[j],arm[j+1]);
                swap(r[j],r[j+1]);
            }
        }
    }
    FOR(i,1,n-1)
    {
        if(arm[i]<w)
        {
            arm[i+1]=arm[i]+arm[i+1]+((art[i+1]-art[i])*r[i]);
            if(i+1==n)
            {
                if(arm[i+1]<w)
                {
                    x=w-arm[i+1];
                    y=x/mx;
                    if(x%mx!=0)
                        y+=1;
                    pf("%lld\n",art[i+1]+y);
                    return 0;
                }
                else
                {
                    pf("%lld\n",art[i+1]);
                    return 0;
                }
            }
        }
        else
        {
            pf("%lld\n",art[i]);
            return 0;
        }
    }

    return 0;
}
