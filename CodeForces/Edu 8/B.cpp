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
C input[300009];
LL dp[300009][5];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,i,j;
    sf("%s",input);
    n=strlen(input);
    for(i=0; i<n; i++)
    {
        for(j=0; j<4; j++)
        {
            dp[i][j]=0;
        }
        LL curr=(input[i]-'0')%4;
        dp[i][curr]++;
        if(i)
        {
            for(j=0; j<4; j++)
            {
                if(curr%4==0)
                {
                    dp[i][j]+=dp[i-1][j];
                }
                if(curr%4==1)
                {
                    dp[i][j]+=dp[i-1][(j+2)%4];
                }
                if(curr%4==2)
                {
                    dp[i][j] += dp[i-1][(j+1)%4];
                }
                if(curr%4==3)
                {
                    dp[i][j]+=dp[i-1][j%4];
                }
            }
        }
    }
    LL sum=0;
    for(i=0; i<n; i++)
    {
        sum+=dp[i][0];
    }
    pf("%I64d\n",sum);
    return 0;
}
