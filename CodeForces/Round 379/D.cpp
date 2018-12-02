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

const int INF = 1000000007;

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
//Ugly Numbers
LL maxDivide(LL a,LL b)
{
    while(a%b==0)
        a=a/b;
    return a;
}
LL isUgly(LL no)
{
    no=maxDivide(no,2);
    no=maxDivide(no,3);
    no=maxDivide(no,5);
    return (no==1)?1:0;
}
//XOR of 2 Numbers
LL myXOR(LL x,LL y)
{
    LL res=0;
    FORR(i,31,0)
    {
        bool b1=x&(1<<i);
        bool b2=y&(1<<i);
        bool xoredBit=(b1&b2)?0:(b1|b2);
        res<<=1;
        res|=xoredBit;
    }
    return res;
}
/*............End............*/
/*.......Global Declaration.......*/
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    int n,p,q,m,a,b,x0,y0,x1,y1,ev,nv,wv,sv,ev1,nv1,wv1,sv1,ed1,nd1,sd1,wd1,ed11,nd11,sd11,wd11;
    C c;
    sf("%d%d%d",&n,&x0,&y0);
    ev=nv=ev1=nv1=nd1=wd1=nd11=wd11=INF;
    wv=sv=wv1=sv1=ed1=ed11=sd1=sd11=-INF;
    FOR(i,1,n)
    {
        getchar(); sf("%c%d%d",&c,&x1,&y1);
        if(x1==x0 && y1<y0)
        {
            wv=max(wv,y1);
            if(c=='R' || c=='Q') wv1=max(wv1,y1);
        }
        else if(x1==x0 && y1>y0)
        {
            ev=min(ev,y1);
            if(c=='R' || c=='Q') ev1=min(ev1,y1);
        }
        else if(y1==y0 && x1<x0)
        {
            sv=max(sv,x1);
            if(c=='R' || c=='Q') sv1=max(sv1,x1);
        }
        else if(y1==y0 && x1>x0)
        {
            nv=min(nv,x1);
            if(c=='R' || c=='Q') nv1=min(nv1,x1);
        }
        if(abs(x1-x0)==abs(y1-y0))
        {
            if(x1>x0 && y1>y0)
            {
                nd1=min(nd1,x1);
                if(c=='B' || c=='Q') nd11=min(nd11,x1);
            }
            else if(x1<x0 && y1>y0)
            {
                ed1=max(ed1,x1);
                if(c=='B' || c=='Q') ed11=max(ed11,x1);
            }
            else if(x1<x0 && y1<y0)
            {
                sd1=max(sd1,x1);
                if(c=='B' || c=='Q') sd11=max(sd11,x1);
            }
            else if(x1>x0 && y1<y0)
            {
                wd1=min(wd1,x1);
                if(c=='B' || c=='Q') wd11=min(wd11,x1);
            }
        }
    }
    if(((wv1!=-INF || wv!=-INF) && wv1>=wv) || ((ev1!=INF || ev!=INF) && ev1<=ev) || ((sv1!=-INF || sv!=-INF) && sv1>=sv) || ((nv1!=INF || nv!=INF) && nv1<=nv) || ((ed1!=-INF || ed11!=-INF) && ed1<=ed11) || ((nd1!=INF || nd11!=INF) && nd11<=nd1) || ((wd1!=INF || wd11!=INF) && wd11<=wd1) || ((sd1!=-INF || sd11!=-INF) && sd1<=sd11)) pf("YES\n");
    else pf("NO\n");
    return 0;
}
