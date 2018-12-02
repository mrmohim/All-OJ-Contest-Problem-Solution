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

typedef unsigned int            U;
typedef long int                L;
typedef unsigned long int       LU;
typedef long long int           LL;
typedef unsigned long long int  LLU;
typedef float                   F;
typedef double                  LF;
typedef char                    C;
string sttt;
LL arrr[100005];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL a,b,c,d,e,f,x,y,n,m,l,r;
    sf("%lld%lld%lld",&n,&l,&r);
    if(n==0)
    {
        sttt="000";
    }
    else if(n==1)
    {
        sttt="010";
    }
    else
    {
        x=1;
        m=n;
        arrr[x]=m;
        m/=2;
        while(m!=0)
        {
            x+=1;
            arrr[x]=m;
            m/=2;
        }
        FORR(i,x,1)
        {
            if(arrr[i]==1)
            {
                sttt="1";
            }
            else
            {
                if(arrr[i]%2==0)
                {
                    sttt=sttt+"0"+sttt;
                }
                else
                {
                    sttt=sttt+"1"+sttt;
                }
            }
        }
    }
    m=0;
    FOR(i,l-1,r-1)
    {
        if(sttt[i]=='1')
        {
            m+=1;
        }
    }
    pf("%lld",m);
    return 0;
}


