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
LF ar1[100010],arx[100010],ary[100010];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LF ax,ay,bx,by,tx,ty,x,y,s=0.0,p,q,m;
    LL n,mn,mx;
    sf("%lf%lf%lf%lf%lf%lf%I64d",&ax,&ay,&bx,&by,&tx,&ty,&n);
    FOR(i,1,n)
    {
        sf("%lf%lf",&arx[i],&ary[i]);
        ar1[i]=sqrt(((tx-arx[i])*(tx-arx[i]))+((ty-ary[i])*(ty-ary[i])));
        s+=ar1[i];
    }
    FOR(i,1,n-1)
    {
        FOR(j,1,n-i)
        {
            if(ar1[j]<ar1[j+1])
            {
                swap(ar1[j],ar1[j+1]);
                swap(arx[j],arx[j+1]);
                swap(ary[j],ary[j+1]);
            }
        }
    }
    p=sqrt(((ax-arx[2])*(ax-arx[2]))+((ay-ary[2])*(ay-ary[2])))+sqrt(((bx-arx[1])*(bx-arx[1]))+((by-ary[1])*(by-ary[1])));
    q=sqrt(((ax-arx[1])*(ax-arx[1]))+((ay-ary[1])*(ay-ary[1])))+sqrt(((bx-arx[2])*(bx-arx[2]))+((by-ary[2])*(by-ary[2])));
    if(p>q)
        y=q;
    else
        y=p;
    if(n==1)
    {
        x=s-ar1[1];
    }
    else
    {
        x=s-(ar1[1]+ar1[2]);
    }
    m=y+(x*2.0)+ar1[1]+ar1[2];
    pf("%.12lf\n",m);
    return 0;
}
