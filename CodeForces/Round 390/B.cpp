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

/*............End............*/
/*.......Global Declaration.......*/
C arrrr[10][10];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m,a=0,b=0,c=0;
    FOR(i,1,4)
    {
        FOR(j,1,4)
        {
            cin>>arrrr[i][j];
        }
    }
    FOR(j,1,4)
    {
        FOR(i,1,2)
        {
            if((arrrr[j][i]=='x' && arrrr[j][i+1]=='x' && arrrr[j][i+2]=='.') || (arrrr[j][i]=='.' && arrrr[j][i+1]=='x' && arrrr[j][i+2]=='x') || (arrrr[j][i]=='x' && arrrr[j][i+1]=='.' && arrrr[j][i+2]=='x'))
            {
                pf("YES\n");
                return 0;
            }
        }
    }
    FOR(j,1,4)
    {
        FOR(i,1,2)
        {
            if((arrrr[i][j]=='x' && arrrr[i+1][j]=='x' && arrrr[i+2][j]=='.') || (arrrr[i][j]=='.' && arrrr[i+1][j]=='x' && arrrr[i+2][j]=='x') || (arrrr[i][j]=='x' && arrrr[i+1][j]=='.' && arrrr[i+2][j]=='x'))
            {
                pf("YES\n");
                return 0;
            }
        }
    }
    if((arrrr[3][1]=='x' && arrrr[2][2]=='x' && arrrr[1][3]=='.') || (arrrr[3][1]=='.' && arrrr[2][2]=='x' && arrrr[1][3]=='x') || (arrrr[3][1]=='x' && arrrr[2][2]=='.' && arrrr[1][3]=='x'))
    {
        pf("YES\n");
        return 0;
    }
    if(((arrrr[4][1]=='x' && arrrr[3][2]=='x' && arrrr[2][3]=='.') || (arrrr[4][1]=='.' && arrrr[3][2]=='x' && arrrr[2][3]=='x') || (arrrr[4][1]=='x' && arrrr[3][2]=='.' && arrrr[2][3]=='x')) || ((arrrr[3][2]=='x' && arrrr[2][3]=='x' && arrrr[1][4]=='.') || (arrrr[3][2]=='.' && arrrr[2][3]=='x' && arrrr[1][4]=='x') || (arrrr[3][2]=='x' && arrrr[2][3]=='.' && arrrr[1][4]=='x')))
    {
        pf("YES\n");
        return 0;
    }
    if((arrrr[4][2]=='x' && arrrr[3][3]=='x' && arrrr[2][4]=='.') || (arrrr[4][2]=='.' && arrrr[3][3]=='x' && arrrr[2][4]=='x') || (arrrr[4][2]=='x' && arrrr[3][3]=='.' && arrrr[2][4]=='x'))
    {
        pf("YES\n");
        return 0;
    }
    if((arrrr[2][1]=='x' && arrrr[3][2]=='x' && arrrr[4][3]=='.') || (arrrr[2][1]=='.' && arrrr[3][2]=='x' && arrrr[4][3]=='x') || (arrrr[2][1]=='x' && arrrr[3][2]=='.' && arrrr[4][3]=='x'))
    {
        pf("YES\n");
        return 0;
    }
    if(((arrrr[1][1]=='x' && arrrr[2][2]=='x' && arrrr[3][3]=='.') || (arrrr[1][1]=='.' && arrrr[2][2]=='x' && arrrr[3][3]=='x') || (arrrr[1][1]=='x' && arrrr[2][2]=='.' && arrrr[3][3]=='x')) || ((arrrr[2][2]=='x' && arrrr[3][3]=='x' && arrrr[4][4]=='.') || (arrrr[2][2]=='.' && arrrr[3][3]=='x' && arrrr[4][4]=='x') || (arrrr[2][2]=='x' && arrrr[3][3]=='.' && arrrr[4][4]=='x')))
    {
        pf("YES\n");
        return 0;
    }
    if((arrrr[1][2]=='x' && arrrr[2][3]=='x' && arrrr[3][4]=='.') || (arrrr[1][2]=='.' && arrrr[2][3]=='x' && arrrr[3][4]=='x') || (arrrr[1][2]=='x' && arrrr[2][3]=='.' && arrrr[3][4]=='x'))
    {
        pf("YES\n");
        return 0;
    }
    pf("NO\n");
    return 0;
}
