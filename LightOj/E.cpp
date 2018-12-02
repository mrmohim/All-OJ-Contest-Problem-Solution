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
LL ar[100010],arp[10010];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m,x,y,z,a,b,c,s,mp,mm,mx,j,mn;
    TEST(tt,t)
    {
        sf("%lld",&n);
        mp=0;
        mm=0;
        s=0;
        x=0;
        mx=0;
        FOR(i,1,n)
        {
            sf("%lld",&ar[i]);
            if(ar[i]<=0)
            {
                if(ar[i]*(-1)<mn)
                    mn=ar[i];
            }
            if(ar[i]>=0)
            {
                if(mm!=0)
                {
                    x+=1;
                    arp[x]=mm;
                    mm=0;
                }
                mp+=ar[i];
            }
            else
            {
                if(mp!=0)
                {
                    x+=1;
                    arp[x]=mp;
                    mp=0;
                }
                mm+=ar[i];
            }
        }
        x+=1;
        if(mm==0)
            arp[x]=mp;
        else
            arp[x]=mm;
        b=1;
        if(arp[1]<0)
            b=2;
        s=0;
        for(j=b; j<=x; j++)
        {
            s+=arp[j];
            if(s>mx)
                mx=s;
            if(arp[j+1]>s+arp[j+1] && arp[j]<0)
                s=0;
        }
        pf("%lld\n",mx);
        mem(arp,0);
    }
    return 0;
}
