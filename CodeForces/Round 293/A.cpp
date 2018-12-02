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
C ch1[110],ch2[110],ch;
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m,x,y,p,q;
    cin>>ch1;
    cin>>ch2;
    n=strlen(ch1);
    x=0;
    y=0;
    FOR(i,0,n-1)
    {
        x+=ch1[i];
        y+=ch2[i];
    }
    if(x==y)
        pf("No such string");
    else
    {
        p=0;
        FORR(i,n-1,0)
        {
            ch=ch2[i];
            if(ch1[i]!=ch2[i] && ch2[i]-ch1[i]!=1)
            {
                FOR(j,ch1[i]+1,ch2[i]-1)
                {
                    ch2[i]=j;
                    y=0;
                    FOR(k,0,n-1)
                    {
                        y+=ch2[k];
                    }
                    if(x!=y)
                    {
                        p=1;
                        break;
                    }
                }
                if(p==1)
                    break;
                else
                    ch2[i]=ch;
            }
        }
        if(p==0)
            pf("No such string");
        else
        {
            FOR(i,0,n-1)
            {
                pf("%c",ch2[i]);
            }
        }
    }
    return 0;
}

