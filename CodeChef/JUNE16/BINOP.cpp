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
C cha[1000001],chb[1000001];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m,x,y,a,b,c,d,s,carry;
    TEST(tt,t)
    {
        cin>>cha>>chb;
        n=strlen(cha);
        a=0;
        b=0;
        x=0;
        y=0;
        FOR(i,0,n-1)
        {
            if(cha[i]=='0')
                x+=1;
            if(cha[i]=='1')
                y+=1;
            if(cha[i]=='0' && chb[i]=='1')
            {
                a+=1;
            }
            if(cha[i]=='1' && chb[i]=='0')
            {
                b+=1;
            }
        }
        if(a==b)
        {
            cout<<"Lucky Chef\n";
            cout<<b<<endl;
        }
        else
        {
            if(a>b)
            {
                a-=b;
                if(y!=0)
                {
                    cout<<"Lucky Chef\n";
                    cout<<b+a<<endl;
                }
                else
                    cout<<"Unlucky Chef\n";
            }
            else
            {
                b-=a;
                if(x!=0)
                {
                    cout<<"Lucky Chef\n";
                    cout<<b+a<<endl;
                }
                else
                    cout<<"Unlucky Chef\n";
            }
        }
    }
    return 0;
}
