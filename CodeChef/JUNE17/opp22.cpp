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
#define FOR(i, b, n)    for(int i=b; i<=n; i++)
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
#define MAXN 1000001
int spf[MAXN+3];
vector<int>ar1;
int ab[2000005];
void sieve()
{
    spf[1] = 1;
    for(int i=2; i<MAXN; i++)
    {
        if(i%2==0)
            spf[i]=2;
        else
        {
            spf[i]=i;
            if(i*i<MAXN)
            {
                for(int j=i*i; j<MAXN; j+=i)
                {
                    if(spf[j]==j)
                        spf[j]=i;
                }
            }
        }
    }
}
map<int, map<int,int> >mp1;
map<int, map<int,int> >mp2;
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    sieve();
    int n,m,a,b,c,x,y,z,q,l,r,s,p;
    sf("%d",&n);
    FOR(i,1,n)
    {
        sf("%d",&x);
        while(x!=1)
        {
            if(ab[spf[x]]==0)
            {
                ar1.pub(spf[x]);
                ab[spf[x]]=1;
            }
            mp1[spf[x]][i]+=1;
            x=x/spf[x];
        }
    }
    sort(ar1.begin(),ar1.end());
    FOR(i,0,ar1.size()-1)
    {
        FOR(j,1,n)
        {
            mp2[ar1[i]][j]+=(mp2[ar1[i]][j-1]+mp1[ar1[i]][j]);
        }
    }
    sf("%d",&q);
    FOR(i,1,q)
    {
        sf("%d%d%d%d",&l,&r,&x,&y);
        s=0;
        a=upper_bound(ar1.begin(), ar1.end(), x)-ar1.begin();
        b=upper_bound(ar1.begin(), ar1.end(), y)-ar1.begin();
        b-=1;
        if(ab[x]!=0)
            a-=1;
        FOR(k,a,b)
        {
            s+=(mp2[ar1[k]][r]-mp2[ar1[k]][l-1]);
        }
        pf("%d\n",s);
    }
    return 0;
}
