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
#define mx 100010
LL ar[mx],ar1[mx];
LL n;
void sive()
{
    LL i,j,k;
    for(i=2; i<=mx; i+=2)
        ar[i]=1;
    ar[0]=ar[1]=1;
    ar[2]=0;
    k=sqrt(mx);
    for(i=3; i<=k; i+=2)
    {
        for(j=i+i; j<=mx; j+=i)
            ar[j]=1;
    }
    n=0;
    for(i=2; i<=mx; i++)
    {
        if(ar[i]==0)
        {
            n+=1;
            ar1[n]=i;
        }
    }
}
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    sive();
    LL m,a,b,x;
    TEST(tt,t)
    {
        sf("%lld",&m);
        x=0;
        FOR(i,1,n)
        {
            FOR(j,i,n)
            {
                a=m-(ar1[i]+ar1[j]);
                if(a>=0)
                {
                    if(ar[a]==0)
                    {
                        x=1;
                        cout<<ar1[i]<<" "<<ar1[j]<<" "<<a<<endl;
                        break;
                    }
                }
                else
                    break;
            }
            if(x==1)
                break;
        }
        if(x==1)
            pf("Case %lld: YES\n",tt);
        else
            pf("Case %lld: NO\n",tt);
    }
    return 0;
}


