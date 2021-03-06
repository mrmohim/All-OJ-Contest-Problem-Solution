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
LL ar[300010];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,x=0,y=0,a=0,b=0;
    sf("%I64d",&n);
    FOR(i,1,n)
    {
        sf("%I64d",&ar[i]);
        if(i>2 && y==0)
        {
            if(ar[i]==ar[i-1]+1)
                x=i;
            else if(ar[1]==ar[i])
            {
                x=i;
                a=1;
                y=1;
            }
            else
            {
                x=0;
                y=1;
            }
        }
    }
    y=0;
    FORR(i,n,1)
    {
        if(i<n-1)
        {
            if(ar[i]==ar[i+1]-1)
                y=i;
            else if(ar[n]==ar[i])
            {
                y=i;
                b=1;
                break;
            }
            else
            {
                y=0;
                break;
            }
        }
    }
    if(a==0 && b==0)
        pf("-1\n");
    else if(y==1 && x==n)
    {
        pf("1\n1 %I64d\n",n);
    }
    else
    {
        pf("2\n");
        if(x>=y)
        {
            pf("1 %I64d\n%I64d %I64d\n",x,x+1,n);
        }
        else
        {
            pf("1 %I64d\n%I64d %I64d\n",y-1,y,n);
        }
    }
    return 0;
}
