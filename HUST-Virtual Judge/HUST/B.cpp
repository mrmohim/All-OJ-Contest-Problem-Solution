
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
LL ar1[10][10],ar2[10][10],s=0,a1,a2,b1,b2,n,m=0;
LL mohim(LL x1,LL y1)
{
    if(x1==a2 && y1==b2)
        return 1;
    else
    {
        if(x1-2<=0 && y1+1>8)
            return 0;
        else if(ar2[x1][y1]==0)
        {
            ar2[x1][y1]+=mohim(x1-2,y1+1);
            s+=max(m,ar2[x1][y1]);
        }
        else
            s+=max(m,ar2[x1][y1]);
        if(x1-2<=0 && y1-1<=0)
            return 0;
        else if(ar2[x1][y1]==0)
        {
            ar2[x1][y1]+=mohim(x1-2,y1-1);
            s+=max(m,ar2[x1][y1]);
        }
        else
            s+=max(m,ar2[x1][y1]);
        if(x1+2>8 && y1+1>8)
            return 0;
        else if(ar2[x1][y1]==0)
        {
            ar2[x1][y1]+=mohim(x1+2,y1+1);
            s+=max(m,ar2[x1][y1]);
        }
        else
            s+=max(m,ar2[x1][y1]);
        if(x1+2>8 && y1-1<=0)
            return 0;
        else if(ar2[x1][y1]==0)
        {
            ar2[x1][y1]+=mohim(x1+2,y1-1);
            s+=max(m,ar2[x1][y1]);
        }
        else
            s+=max(m,ar2[x1][y1]);
        if(x1+1>8 && y1-2<=0)
            return 0;
        else if(ar2[x1][y1]==0)
        {
            ar2[x1][y1]+=mohim(x1+1,y1-2);
            s+=max(m,ar2[x1][y1]);
        }
        else
            s+=max(m,ar2[x1][y1]);
        if(x1-1<=0 && y1-2<=0)
            return 0;
        else if(ar2[x1][y1]==0)
        {
            ar2[x1][y1]+=mohim(x1-1,y1-2);
            s+=max(m,ar2[x1][y1]);
        }
        else
            s+=max(m,ar2[x1][y1]);
        if(x1+1>8 && y1+2>8)
            return 0;
        else if(ar2[x1][y1]==0)
        {
            ar2[x1][y1]+=mohim(x1+1,y1+2);
            s+=max(m,ar2[x1][y1]);
        }
        else
            s+=max(m,ar2[x1][y1]);
        if(x1-1<=0 && y1+2>8)
            return 0;
        else if(ar2[x1][y1]==0)
        {
            ar2[x1][y1]+=mohim(x1-1,y1+2);
            s+=max(m,ar2[x1][y1]);
        }
        else
            s+=max(m,ar2[x1][y1]);
    }
}
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    C c1,c2;
    cin>>c1>>b1>>c2>>b2;
    a1=c1-96;
    a2=c2-96;
    n=mohim(a1,b1);
    cout<<s;
    return 0;
}

