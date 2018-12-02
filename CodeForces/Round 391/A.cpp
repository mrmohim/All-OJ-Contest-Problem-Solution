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

// i/o.
#define sf              scanf
#define pf              printf
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
LL ar[1000];
string strr;
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m,a,b,c,d;
    cin>>strr;
    FOR(i,0,strr.size()-1)
    {
        ar[strr[i]]+=1;
    }
    if(ar['B']>0 && ar['u']>1 && ar['l']>0 && ar['b']>0 && ar['a']>1 && ar['s']>0 && ar['r']>0)
    {
        n=min(ar['B'],min(ar['u']/2,min(ar['l'],min(ar['b'],min(ar['a']/2,min(ar['s'],ar['r']))))));
        pf("%lld\n",n);
    }
    else
        pf("0\n");
    return 0;
}


