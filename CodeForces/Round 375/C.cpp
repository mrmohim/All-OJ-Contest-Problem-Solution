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
map<LL,LL>mp;
LL ar[2003],ar1[2003];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m,a,b,c,d,x,y,mn,mx,s,cnt=0;
    cin>>n>>m;
    x=0;
    b=0;
    FOR(i,1,n)
    {
        cin>>ar[i];
        mp[ar[i]]+=1;
        if(ar[i]>m)
            b+=1;
        ar1[i]=ar[i];
    }
    a=n/m;
    if(n%m!=0)
        a+=1;
    s=0;
    if(b!=0)
    {
        FOR(i,1,n)
        {
            c=0;
            if(ar[i]>m)
            {
                mn=INF;
                FOR(j,1,m)
                {
                    if(mp[j]<mn)
                    {
                        mn=mp[j];
                        s=j;
                    }
                    if(mn==mp[j])
                        c+=1;
                }
                mp[ar[i]]-=1;
                ar[i]=s;
                mp[s]+=1;
            }
            if(c==m)
                break;
        }
    }
    if(c!=m)
    {
        FOR(i,1,n)
        {
            if(mp[ar[i]]>a)
            {
                mn=INF;
                FOR(j,1,m)
                {
                    if(mp[j]<mn)
                    {
                        mn=mp[j];
                        s=j;
                    }
                }
                mp[ar[i]]-=1;
                ar[i]=s;
                mp[s]+=1;
            }
        }
    }
    mx=INF;
    cnt=0;
    FOR(i,1,n)
    {
        if(mp[ar[i]]<mx)
            mx=mp[ar[i]];
        if(ar[i]!=ar1[i])
            cnt+=1;
    }
    pf("%lld %lld\n",mx,cnt);
    FOR(i,1,n)
    {
        pf("%lld ",ar[i]);
    }
    return 0;
}
