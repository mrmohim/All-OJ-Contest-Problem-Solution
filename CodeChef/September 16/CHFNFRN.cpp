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
/*............End............*/
/*.......Global Declaration.......*/
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m,x,y,z,a,b,c,s,r,mx,mn;
    TEST(tt,t)
    {
        cin>>n>>m;
        LL ar[n+4][n+4],ar1[n+4];
        mem(ar,0);
        mem(ar1,0);
        FOR(i,1,m)
        {
            cin>>a>>b;
            if(ar[a][b]==0)
            {
                ar1[a]+=1;
                ar[a][b]=1;
            }
            if(ar[b][a]==0)
            {
                ar1[b]+=1;
                ar[b][a]=1;
            }
        }
        sort(ar1+1,ar1+n+1);
        z=count(ar1+1,ar1+n+1,1);
        if(n<=2)
            pf("YES\n");
        else if(n==3 && m!=0)
            pf("YES\n");
        else if((ar1[1]==0 && ar1[2]==0) || m==0)
            pf("NO\n");
        else if(z>1)
            pf("NO\n");
        else if(ar1[1]==0 && ar1[2]!=0)
        {
            y=0;
            FOR(i,2,n)
            {
                if(ar1[i]!=n-2)
                {
                    y=1;
                    break;
                }
            }
            if(y==0)
                pf("YES\n");
            else
                pf("NO\n");
        }
        else if(ar1[1]==ar1[n])
        {
            pf("YES\n");
        }
        else
        {
            y=0;
            FOR(i,2,n)
            {
                if(ar1[i]-ar1[i-1]>1)
                {
                    y+=1;
                }
            }
            if(y>1)
                pf("NO\n");
            else
                pf("YES\n");
        }
    }
    return 0;
}


