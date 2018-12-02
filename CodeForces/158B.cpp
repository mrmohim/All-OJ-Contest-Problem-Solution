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
LL ch[100010];

int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m,x,a,b,c,d,s;
    while(sf("%I64d",&n)!=EOF)
    {
        s=0;
        a=0;
        b=0;
        c=0;
        d=0;
        FOR(i,0,n-1)
        {
            sf("%I64d",&ch[i]);
            if(ch[i]==4)
                d+=1;
            else if(ch[i]==3)
                c+=1;
            else if(ch[i]==2)
                b+=1;
            else
                a+=1;
        }
        if(d!=0)
            s+=d;
        if(c!=0)
        {
            if(c>=a)
                a=0;
            else
                a-=c;
            s+=c;
        }
        if(b!=0)
        {
            s+=(b/2);
            b=(b%2);
            if(b!=0)
            {
                if(a>=2)
                    a-=2;
                else if(a==1)
                    a-=1;
                s+=1;
            }
        }
        if(a!=0)
        {
            s+=(a/4);
            a=(a%4);
            if(a!=0)
                s+=1;
        }
        pr1(s);
    }
    return 0;
}
