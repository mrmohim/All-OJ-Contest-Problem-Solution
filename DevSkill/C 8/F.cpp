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
#include <climits>
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
string find_minimum_window(string s, string t)
{
    int ns = s.size(), nt = t.size();
    vector<int> total(256, 0);
    vector<int> sofar(256, 0);
    for(int i=0; i<nt; i++)
        total[t[i]]++;

    int L = 0, R;
    int minL = 0;
    int count = 0;
    int min_win_len = INT_MAX;

    for(R=0; R<ns; R++)
    {
        if(total[s[R]] == 0) continue;
        else sofar[s[R]]++;

        if(sofar[s[R]] <= total[s[R]])
            count++;

        if(count == nt)
        {
            while(true)
            {
                char c = s[L];
                if(total[c] == 0)
                {
                    L++;
                }
                else if(sofar[c] > total[c])
                {
                    sofar[c]--;
                    L++;
                }
                else break;
            }
            if(R - L + 1 < min_win_len)
            {
                min_win_len = R - L + 1;
                minL = L;
            }
        }
    }
    string res;
    if(count == nt)
        res = s.substr(minL, min_win_len);
    return res;
}
string ch,ch1;
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m,a,b,c,x,y,s;
    TEST(tt,t)
    {
        cin>>n;
        cin>>ch;
        ch1=find_minimum_window(ch, "TMFJ");
        m=ch1.length();
        pf("%lld\n",m);
    }
    return 0;
}


