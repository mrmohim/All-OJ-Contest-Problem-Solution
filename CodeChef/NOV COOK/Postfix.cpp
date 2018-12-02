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
int postfix(int n)
{
    if(n-1==0 || n-2==0)
        return 0;
    else
    {
        postfix(n-1);
        cout<<n-1<<" ";
        postfix(n-2);
        cout<<n-2<<" ";
    }
}
int prefix(int n)
{
    if(n-1==0 || n-2==0)
        return 0;
    else
    {
        cout<<n-1<<" ";
        prefix(n-1);
        cout<<n-2<<" ";
        prefix(n-2);
    }
}
int x;
int infix(int n)
{
    x=n;
    if(n-1==0 || n-2==0)
        return 0;
    else
    {
        infix(n-1);
        if(n==3)
            cout<<2<<" ";
        cout<<n<<" ";
        infix(n-2);
        cout<<n-2<<" ";
    }
}
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    int m;
    while(cin>>m)
    {
        //postfix
        cout<<"PostFix: ";
        postfix(m);
        cout<<m<<endl;
        //prefix
        cout<<"PreFix: "<<m<<" ";
        prefix(m);
        cout<<endl;
        //infix
        cout<<"InFix: ";
        infix(m);
    }
    return 0;
}

