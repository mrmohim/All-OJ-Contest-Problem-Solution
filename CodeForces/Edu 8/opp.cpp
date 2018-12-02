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
C arr[300009];
LL query[300009][5];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL N,i,j;
    sf("%s",arr);
    N=strlen(arr);
    for(int i = 1; i <= N; i++)
    {
        query[i][i] = ((arr[i]-'0') % 4 == 0); // i.e. # of substrings divisible by 3 in [4, 4] is 1 if arr[4] is divisble by 3 otherwise 0
        arr[i] += arr[i - 1]; // arr[i] will contain cumulative sum of 1...i
    }

//
    for(int i = N - 1; i > 0; i--)
    {
        for(int j = i + 1; j <= N; j++)
        {
            // exclusion-inclusion principle. # of substrings in [1, 7] will be -
            // #1 sum of # of substrings in [1, 6] and [2, 7].
            //    As [2, 6] is included two times, so we need to subtract it one time
            // #2 plus 1 if substring [1, 7] is divisble by 3, 0 otherwise

            // #1
            query[i][j] = query[i][j - 1] + query[i + 1][j] - query[i + 1][j - 1];
            // #2
            // arr[j] contains sum of 1...j.
            // so arr[j] - arr[i - 1] contains sum of [i...j]
            // number constructed from substring [i...j] is divisble by 3
            // iff summation of its digits is divible by 3
            query[i][j] += (((arr[j]-'0') - (arr[i-1]-'0')) % 4 == 0);
        }
    }
    LL sum=0;
    for(i=0; i<N; i++)
    {
        sum+=query[i][N];
    }
    pf("%I64d\n",sum);
    return 0;
}
