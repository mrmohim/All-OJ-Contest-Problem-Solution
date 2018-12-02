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

#define pub              push_back
#define pob              pop_back

/*............End............*/
/*.......Global Declaration.......*/
C ST[200005];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m,a,b,c,x,y;
    cin>>n;
    cin>>ST;
    c=strlen(ST);
    a=count(ST,ST+n,'D');
    b=count(ST,ST+n,'R');
    x=0;
    y=0;
    m=n/2;
    if(n%2!=0)
        m+=1;
    if(a==b)
    {
        FOR(i,0,m-1)
        {
            if(ST[i]=='D')
            {
                x+=1;
            }
            else
            {
                y+=1;
            }
        }
        if(x==y)
        {
            if(a==b)
                cout<<ST[0];
            else if(a>b)
                pf("D");
            else
                pf("R");
        }
        else if(x>y)
            cout<<"D";
        else
            cout<<"R";
    }
    else if(b>a)
    {
        if(a*2<=b)
            pf("R");
        else
        {
            FOR(i,0,m-1)
            {
                if(ST[i]=='D')
                {
                    x+=1;
                }
                else
                {
                    y+=1;
                }
            }
            if(x==y)
            {
                if(a==b)
                    cout<<ST[0];
                else if(a>b)
                    pf("D");
                else
                    pf("R");
            }
            else if(x>y)
                cout<<"D";
            else
                cout<<"R";
        }
    }
    else
    {
        if(b*2<=a)
            pf("D");
        else
        {
            FOR(i,0,m-1)
            {
                if(ST[i]=='D')
                {
                    x+=1;
                }
                else
                {
                    y+=1;
                }
            }
            if(x==y)
            {
                if(a==b)
                    cout<<ST[0];
                else if(a>b)
                    pf("D");
                else
                    pf("R");
            }
            else if(x>y)
                cout<<"D";
            else
                cout<<"R";
        }
    }
    return 0;
}


