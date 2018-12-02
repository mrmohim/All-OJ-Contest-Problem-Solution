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
LL ar[505][505],arr[505],arc[505];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m,x,y,a,b,c,r,s,p,q,g,h,t;
    cin>>n;
    x=-1;
    y=-1;
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
            arr[i]+=ar[i][j];
            arc[j]+=ar[i][j];
        }
    }
    if(n==1)
        cout<<1<<endl;
    else
    {
        if(r==1)
        {
            x=arr[2];
        }
        else
            x=arr[1];
        a=0;
        FOR(i,1,n)
        {
            if(i!=r)
            {
                if(arr[i]!=x)
                    a=1;
            }
            if(i!=c)
            {
                if(arc[i]!=x)
                    a=1;
            }
        }
        if(a==0)
        {
            p=0;
            q=0;
            s=0;
            t=0;
            FOR(i,1,n)
            {
                p+=ar[i][i];
                if(ar[i][i]==0)
                    t=1;
                q+=ar[i][n-i+1];
                if(ar[i][n-i+1]==0)
                    s=1;
            }
            if(p>x)
                a=1;
            if(q>x)
                a=1;
            if(t==1 && p==x)
                a=1;
            if(s==1 && q==x)
                a=1;
            if(t==0)
            {
                if(p!=x)
                    a=1;
            }
            if(s==0)
            {
                if(q!=x)
                    a=1;
            }
        }
        if(a==1)
            pf("-1\n");
        else
        {
            if(x>arc[c])
            {
                y=x-arc[c];
                arc[c]+=y;
                arr[r]+=y;
                if(arc[c]==arr[r])
                {
                    cout<<y<<endl;
                }
                else
                    pf("-1\n");
            }
            else
                pf("-1\n");
        }
    }
    return 0;
}
