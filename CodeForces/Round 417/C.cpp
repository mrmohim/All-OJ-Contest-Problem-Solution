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

#define pub              push_back
#define pob              pop_back
/*.......Global Function.......*/
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
//BIG Fibonacci
//map<LLU,LL> FFF;
//LLU fff(LLU n)
//{
//    if (FFF.count(n)) return FFF[n];
//    LLU k=n/2;
//    if (n%2==0)   // n=2*k
//    {
//        return FFF[n] = (fff(k)*fff(k) + fff(k-1)*fff(k-1)) % mod;
//    }
//    else     // n=2*k+1
//    {
//        return FFF[n] = (fff(k)*fff(k+1) + fff(k-1)*fff(k)) % mod;
//    }
//}//must be define in main function (FFF[0]=FFF[1]=1)
/*............End............*/
/*.......Global Declaration.......*/
LL ro[102],mnn[102],co[102],co1[102];
LL ar[102][102],ar1[102][102];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m,a,b,c,x,y,s,mn,w;
    sf("%lld%lld",&n,&m);
    s=0;
    FOR(i,1,n)
    {
        mn=INF;
        y=0;
        a=0;
        FOR(j,1,m)
        {
            sf("%lld",&ar[i][j]);
            ar1[i][j]=ar[i][j];
            mn=min(mn,ar[i][j]);
            if(ar[i][j]==0)
                y=1;
            if(y!=1)
            {
                a+=ar[i][j];
            }
        }
        if(y!=1)
        {
            x=a/m;
            ro[i]=min(x,mn);
            s+=ro[i];
        }
    }
    x=0;
    FOR(i,1,n)
    {
        FOR(j,1,m)
        {
            ar[i][j]-=ro[i];
            if(ar[i][j]!=0 && i==1)
            {
                s+=ar[i][j];
            }
            if(i>1)
            {
                if(ar[i][j]!=ar[i-1][j])
                {
                    x=1;
                    break;
                }
            }

        }
    }
    ////////////////////
    c=0;
    FOR(i,1,n)
    {
        a=0;
        FOR(j,1,m)
        {
            if(i==1)
                mnn[j]=INF;
            mnn[j]=min(mnn[j],ar1[i][j]);
            if(ar1[i][j]==0)
                mnn[j]=-1;
            if(mnn[j]!=-1)
            {
                co[j]+=ar1[i][j];
            }
            if(i==n)
            {
                if(mnn[j]!=-1)
                {
                    w=co[j]/n;
                    co1[j]=min(w,mnn[j]);
                    c+=co1[j];
                }
            }
        }
    }
    y=0;
    FOR(i,1,n)
    {
        FOR(j,1,m)
        {
            ar1[i][j]-=co1[j];
            if(ar1[i][j]!=0 && j==1)
            {
                c+=ar1[i][j];
            }
            if(j>1)
            {
                if(ar1[i][j]!=ar1[i][j-1])
                {
                    y=1;
                    break;
                }
            }

        }
    }
    if(x==1 || y==1)
        pf("-1\n");
    else
    {
        if(s<=c)
        {
            pf("%lld\n",s);
            FOR(i,1,n)
            {
                if(ro[i]!=0)
                {
                    FOR(j,1,ro[i])
                    {
                        pf("row %lld\n",i);
                    }
                }
            }
            FOR(i,1,m)
            {
                if(ar[1][i]!=0)
                {
                    FOR(j,1,ar[1][i])
                    {
                        pf("col %lld\n",i);
                    }
                }
            }
        }
        else
        {
            pf("%lld\n",c);
            FOR(i,1,m)
            {
                if(co1[i]>=1)
                {
                    FOR(j,1,co1[i])
                    {
                        pf("col %lld\n",i);
                    }
                }
            }
            FOR(i,1,n)
            {
                if(ar1[i][1]!=0)
                {
                    FOR(j,1,ar1[i][1])
                    {
                        pf("row %lld\n",i);
                    }
                }
            }
        }
    }
    return 0;
}
