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
#define TEST(i,t)       LL i,t;scanf("%I64d",&t);for(i=1;i<=t;i++)

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
LL ar[200010];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m,l,r,x,a,b=1,p,q,w=0,v;
    sf("%I64d%I64d",&n,&m);
    FOR(i,1,n)
    {
        sf("%I64d",&ar[i]);
        if(i>1)
        {
            q=ar[i];
            if(p==q && w==0)
                b+=1;
            else
                w=1;
            p=q;
        }
        else
            p=ar[i];
    }
    FOR(i,1,m)
    {
        sf("%I64d%I64d%I64d",&l,&r,&x);
        if(b==n)
        {
            if(ar[i]==x)
                pf("-1\n");
            else
                pf("1\n");
        }
        else
        {
            a=0;
            for(;;)
            {
                if((l+r)%2==0)
                    v=(l+r)/2;
                else
                    v=(l+r+1)/2;
                if(ar[l]!=x)
                {
                    pf("%I64d\n",l);
                    a=1;
                    break;
                }
                else
                {
                    if(ar[v]!=x)
                    {
                        pf("%I64d\n",v);
                        a=1;
                        break;
                    }
                    l+=1;
                }
                if(ar[r]!=x)
                {
                    pf("%I64d\n",r);
                    a=1;
                    break;
                }
                else
                {
                    if(ar[v]!=x)
                    {
                        pf("%I64d\n",v);
                        a=1;
                        break;
                    }
                    r-=1;
                }
                if(v<l && v>r)
                {
                    break;
                }
            }
            if(a==0)
                pf("-1\n");
        }

    }
    return 0;
}


