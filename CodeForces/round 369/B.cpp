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
LL ar[505][505],ars[250007];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m,x,y,a,b,c,r,s,p,q,g,h,t,rr,cc;
    cin>>n;
    FOR(i,1,n)
    {
        FOR(j,1,n)
        {
            cin>>ar[i][j];
            if(ar[i][j]==0)
            {
                r=i;
                c=j;
            }
        }
    }
    a=0;
    rr=0;
    cc=0;
    FOR(i,1,n)
    {
        if(i!=r)
        {
            a+=1;
            FOR(j,1,n)
            {
                ars[a]+=ar[i][j];
            }
        }
        else
        {
            FOR(j,1,n)
            {
                rr+=ar[i][j];
            }
        }
        if(i!=c)
        {
            a+=1;
            FOR(j,1,n)
            {
                ars[a]+=ar[j][i];
            }
        }
        else
        {
            FOR(j,1,n)
            {
                cc+=ar[j][i];
            }
        }
    }
    x=0;y=0;p=0;q=0;
    FOR(i,1,n)
    {
        if(i==r && i==c)
            p=1;
        x+=ar[i][i];
        if(i==r && n-i+1==c)
            q=1;
        y+=ar[i][n-i+1];
    }
    if(p==0)
    {
        a+=1;
        ars[a]=x;
    }
    if(q==0)
    {
        a+=1;
        ars[a]=y;
    }
    sort(ars+1,ars+a+1);
    if(n==1)
        pf("1\n");
    else if(ars[1]!=ars[a])
        pf("-1\n");
    else
    {
        if(ars[a]<=cc || ars[a]<=rr)
            pf("-1\n");
        else
        {
            s=ars[a]-cc;
            cc+=s;
            rr+=s;
            if(ars[a]!=cc || ars[a]!=rr)
                pf("-1\n");
            else
            {
                if(p==1 && q==1)
                {
                    x+=s;
                    y+=s;
                    if(ars[a]!=x || ars[a]!=y)
                        pf("-1\n");
                    else
                        pf("%I64d\n",s);
                }
                else if(p==1 && q==0)
                {
                    x+=s;
                    if(ars[a]!=x)
                        pf("-1\n");
                    else
                        pf("%I64d\n",s);
                }
                else if(p==0 && q==1)
                {
                    y+=s;
                    if(ars[a]!=y)
                        pf("-1\n");
                    else
                        pf("%I64d\n",s);
                }
                else
                    pf("%I64d\n",s);
            }
        }
    }

    return 0;
}
