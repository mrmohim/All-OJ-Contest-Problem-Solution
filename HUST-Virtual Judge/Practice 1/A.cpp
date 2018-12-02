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
LL ar[15],s=0,t,n,take[15];
vector<LL>sum;
vector< vector<LL> >res;
map< vector<LL>,LL > mp;
int mohim(LL x)
{
    if(s==t)
    {
        if(mp[sum]==0)
        {
            res.push_back(sum);
            mp[sum]=1;
        }
        return 0;
    }
    FOR(i,x,n-1)
    {
        if(take[i]==0)
        {
            if(ar[i]<=(t-s))
            {
                take[i]=1;
                s+=ar[i];
                sum.push_back(ar[i]);
                mohim(i);
                take[i]=0;
                sum.pop_back();
                s-=ar[i];
            }
        }
    }
}
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL m,a,b,c,d,e,s,x,y,z;
    while(cin>>t>>n)
    {
        if(n==0)
            break;
        FOR(i,0,n-1)
        {
            cin>>ar[i];
            take[i]=0;
        }
        pf("Sums of %lld:\n",t);
        sum.clear();
        res.clear();
        mp.clear();
        mohim(0);
        if(res.size()==0)
            pf("NONE\n");
        else
        {
            FOR(i,0,res.size()-1)
            {
                FOR(j,0,res[i].size()-1)
                {
                    if(j==0)
                        pf("%lld",res[i][j]);
                    else
                        pf("+%lld",res[i][j]);
                }
                pf("\n");
            }
        }
    }
    return 0;
}
