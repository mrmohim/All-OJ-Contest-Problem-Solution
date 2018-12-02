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
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL d1,m1,y1,d2,m2,y2,n,m,x,y,a,b,s;
    TEST(tt,t)
    {
        scanf("%lld%lld%lld",&d1,&m1,&y1);
        scanf("%lld%lld%lld",&d2,&m2,&y2);
        n=(y2*12+m2)-(y1*12+m1);
        s=0;
        x=0;
        FOR(i,1,n)
        {
            if(m1==1)
            {
                if(i==1)
                    s=31-d1;
                else
                    s+=31;
                m1+=1;
            }
            else if(m1==2)
            {
                if(y1%400==0 || (y1%100!=0 && y1%4==0))
                {
                    if(i==1)
                        s=29-d1;
                    else
                        s+=29;
                }
                else
                {
                    if(i==1)
                        s=28-d1;
                    else
                        s+=28;
                }
                m1+=1;
            }
            else if(m1==3)
            {
                if(i==1)
                    s=31-d1;
                else
                    s+=31;
                m1+=1;
            }
            else if(m1==4)
            {
                if(i==1)
                    s=30-d1;
                else
                    s+=30;
                m1+=1;
            }
            else if(m1==5)
            {
                if(i==1)
                    s=31-d1;
                else
                    s+=31;
                m1+=1;
            }
            else if(m1==6)
            {
                if(i==1)
                    s=30-d1;
                else
                    s+=30;
                m1+=1;
            }
            else if(m1==7)
            {
                if(i==1)
                    s=31-d1;
                else
                    s+=31;
                m1+=1;
            }
            else if(m1==8)
            {
                if(i==1)
                    s=31-d1;
                else
                    s+=31;
                m1+=1;
            }
            else if(m1==9)
            {
                if(i==1)
                    s=30-d1;
                else
                    s+=30;
                m1+=1;
            }
            else if(m1==10)
            {
                if(i==1)
                    s=31-d1;
                else
                    s+=31;
                m1+=1;
            }
            else if(m1==11)
            {
                if(i==1)
                    s=30-d1;
                else
                    s+=30;
                m1+=1;
            }
            else if(m1==12)
            {
                if(i==1)
                    s=31-d1;
                else
                    s+=31;
                m1=1;
                y1+=1;
            }
            x=1;
        }
        if(x==0)
            s+=(d2-d1);
        else
            s+=d2;
        pf("Case %lld: %lld days\n",tt,s);
    }
    return 0;
}
