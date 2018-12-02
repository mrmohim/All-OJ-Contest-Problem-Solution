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
string st;
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL s,m,l,xl,xxl,n;
    cin>>s>>m>>l>>xl>>xxl;
    cin>>n;
    FOR(i,1,n)
    {
        cin>>st;
        if(st=="S")
        {
            if(s!=0)
            {
                cout<<"S\n";
                s-=1;
            }
            else if(m!=0)
            {
                cout<<"M\n";
                m-=1;
            }
            else if(l!=0)
            {
                cout<<"L\n";
                l-=1;
            }
            else if(xl!=0)
            {
                cout<<"XL\n";
                xl-=1;
            }
            else
            {
                cout<<"XXL\n";
                xxl-=1;
            }
        }
        else if(st=="M")
        {
            if(m!=0)
            {
                cout<<"M\n";
                m-=1;
            }
            else if(l!=0)
            {
                cout<<"L\n";
                l-=1;
            }
            else if(s!=0)
            {
                cout<<"S\n";
                s-=1;
            }
            else if(xl!=0)
            {
                cout<<"XL\n";
                xl-=1;
            }
            else
            {
                cout<<"XXL\n";
                xxl-=1;
            }
        }
        else if(st=="L")
        {
            if(l!=0)
            {
                cout<<"L\n";
                l-=1;
            }
            else if(xl!=0)
            {
                cout<<"XL\n";
                xl-=1;
            }
            else if(m!=0)
            {
                cout<<"M\n";
                m-=1;
            }
            else if(xxl!=0)
            {
                cout<<"XXL\n";
                xxl-=1;
            }
            else
            {
                cout<<"S\n";
                s-=1;
            }
        }
        else if(st=="XL")
        {
            if(xl!=0)
            {
                cout<<"XL\n";
                xl-=1;
            }
            else if(xxl!=0)
            {
                cout<<"XXL\n";
                xxl-=1;
            }
            else if(l!=0)
            {
                cout<<"L\n";
                l-=1;
            }
            else if(m!=0)
            {
                cout<<"M\n";
                m-=1;
            }
            else
            {
                cout<<"S\n";
                s-=1;
            }
        }
        else
        {
            if(xxl!=0)
            {
                cout<<"XXL\n";
                xxl-=1;
            }
            else if(xl!=0)
            {
                cout<<"XL\n";
                xl-=1;
            }
            else if(l!=0)
            {
                cout<<"L\n";
                l-=1;
            }
            else if(m!=0)
            {
                cout<<"M\n";
                m-=1;
            }
            else
            {
                cout<<"S\n";
                s-=1;
            }
        }
    }
    return 0;
}
