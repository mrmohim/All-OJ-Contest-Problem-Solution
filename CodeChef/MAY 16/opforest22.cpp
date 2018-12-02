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
#define FOR(i, b, n)    for(LLU i=b; i<=n; i++)
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
#define TEST(i,t)       LLU i,t;scanf("%llu",&t);for(i=1;i<=t;i++)

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
LL h[100010],r[100010];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LLU n,w,l,m1,m2,x,a,s=0;
    LL mid,low,high;
    sf("%llu%llu%llu",&n,&w,&l);
    FOR(i,1,n)
    {
        sf("%llu%llu",&h[i],&r[i]);
    }
    x=0;
    low=1;
    high=1000000000000000000;
    while(low<=high)
    {
        mid=(low+high)/2;
        s=0;
        a=0;
        FOR(i,1,n)
        {
            m1=h[i]+(r[i]*mid);
            m2=h[i]+(r[i]*(mid+1));
            if(m1>=l)
                s+=m1;
            if(m2>=l)
                a+=m2;
        }
        if(w==s)
        {
            pf("%llu\n",mid);
            return 0;
        }
        else if(w==a)
        {
            pf("%llu\n",mid+1);
            return 0;
        }
        else if(s<w && w<a)
        {
            pf("%llu\n",mid+1);
            return 0;
        }
        else if(w<s && w<a)
            high=mid-1;
        else
            low=mid+1;
    }
    if(s>w)
        pf("%llu\n",mid-1);
    else
        pf("%llu\n",mid+1);
    return 0;
}
