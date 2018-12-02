/* ===================================*/
/* Author : Moshiur Rahman Mohim */
/* Email : mtmohim74@gmail.com */
/* Institute: HSTU */
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
using namespace std;

const int INF = 0x7f7f7f7f;

#define pi acos(-1.0)
#define mod 1000000007
#define MAX 10000
#define FOR(i, b, n) for(LLU i=b; i<=n; i++)
#define FORR(i, n, b) for(LLU i=n; i>=b; i--)
// Library.
#define mem(a,b) memset(a,b,sizeof(a))
#define Sort(x) sort(x.begin(),x.end())
#define Reverse(x) reverse(x.begin(),x.end())
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a * (b / gcd(a,b)))
#define sq(x) (x)*(x)
// File.
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
// i/o.
#define sf scanf
#define pf printf
#define pr1(x) cout<<x<<"\n"
#define pr2(x,y) cout<<x<<" "<<y<<"\n"
#define pr3(x,y,z) cout<<x<<" "<<y<<" "<<z<<"\n"
// Test Case.
#define TEST(i,t) LLU i,t;scanf("%llu",&t);for(i=1;i<=t;i++)

typedef unsigned int U;
typedef long int L;
typedef unsigned long int LU;
typedef long long int LL;
typedef unsigned long long int LLU;
typedef float F;
typedef double LF;
typedef char C;

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
LLU ar[100010];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LLU n,m,x,y,a,b,c,s;
    TEST(tt,t)
    {
        sf("%llu%llu%llu",&n,&x,&m);
        FOR(i,1,n)
        {
            sf("%llu",&ar[i]);
        }
        m=m%mod;
        if(x==1)
            pf("%llu\n",ar[1]%mod);
        else if(x==2)
            pf("%llu\n",((((ar[1]%mod)*(m%mod))%mod)+(ar[2]%mod))%mod);
        else
        {
            m=m%1000000;
            FOR(i,1,m)
            {
                s=ar[1];
                FOR(j,2,x)
                {
                    s=((ar[j]%mod)+(s%mod))%mod;
                    ar[j]=s;
                }
            }
            pf("%llu\n",ar[x]%mod);
        }
    }
    return 0;
}
