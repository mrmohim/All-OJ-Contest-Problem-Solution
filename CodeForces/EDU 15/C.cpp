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
LL arc[100005],arn[100005],ar11[200005],ar22[200005];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m,a,b,c,x,y,s,mx,mn,r;
    sf("%I64d%I64d",&n,&m);
    FOR(i,1,n)
    {
        sf("%I64d",&arc[i]);
    }
    FOR(i,1,m)
    {
        sf("%I64d",&arn[i]);
    }
    a=0;
    b=0;
    FOR(i,1,m+n)
    {
        if(a==n)
        {
            FOR(j,i,i+(m-b))
            {
                b+=1;
                ar11[j]=arn[b];
                ar22[j]=1;
            }
            break;
        }
        else if(b==m)
        {
            FOR(j,i,i+(n-a))
            {
                a+=1;
                ar11[j]=arc[a];
            }
            break;
        }
        if(arc[a+1]==arn[b+1])
        {
            a+=1;
            b+=1;
            ar11[i]=arc[a];
            i+=1;
            ar11[i]=arn[b];
            ar22[i]=1;
        }
        else if(arc[a+1]>arn[b+1])
        {
            b+=1;
            ar11[i]=arn[b];
            ar22[i]=1;
        }
        else
        {
            a+=1;
            ar11[i]=arc[a];
        }
    }
    a=1;
    b=1;
    r=0;
    s=0;
    FOR(i,1,n+m)
    {
        if(ar22[i]==1)
        {
            s+=1;
            if(s==m)
            {
                if(s==1)
                {
                    x=abs(ar11[m+n]-ar11[1]);
                    if(x>r)
                        r=x;
                    break;
                }
                else
                {
                    x=abs(ar11[m+n]-ar11[i]);
                    if(x>r)
                        r=x;
                    break;
                }
            }
            else if(ar22[1]==0 && s==1)
            {
                x=abs(ar11[i]-ar11[1]);
                if(x>r)
                    r=x;
                b=i;
            }
            else
            {
                a=b;
                b=i;
                FOR(j,a+1,b-1)
                {
                    if(ar22[j]==0)
                    {
                        x=abs(ar11[j]-ar11[a]);
                        y=abs(ar11[b]-ar11[j]);
                        c=min(x,y);
                        if(c>r)
                            r=c;
                    }
                }
            }
        }
    }
    pf("%lld\n",r);
    return 0;
}
