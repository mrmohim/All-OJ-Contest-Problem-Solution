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
map<string,LL>mp;
map<string,string>mp1;
string ch1,ch2;

string fin(string ch)
{
    if(mp1[ch]==ch)
        return ch;
    return mp1[ch]=fin(mp1[ch]);
}
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL x,y,n;
    TEST(tt,t)
    {
        sf("%lld",&n);
        FOR(i,1,n)
        {
            cin>>ch1>>ch2;
            if(mp1[ch1]=="\0" && mp1[ch2]=="\0")
            {
                if(ch1==ch2)
                    mp[ch1]=1;
                else
                    mp[ch1]=2;
                mp1[ch2]=ch1;
                mp1[ch1]=ch1;
                pf("%lld\n",mp[ch1]);
            }
            else if(mp1[ch1]!="\0" && mp1[ch2]=="\0")
            {
                if(ch1!=ch2)
                {
                    ch1=fin(ch1);
                    mp[mp1[ch1]]+=1;
                    mp1[ch2]=mp1[ch1];
                }
                else
                {
                    ch1=fin(ch1);
                }
                pf("%lld\n",mp[mp1[ch1]]);
            }
            else if(mp1[ch1]=="\0" && mp1[ch2]!="\0")
            {
                if(ch1!=ch2)
                {
                    ch2=fin(ch2);
                    mp[mp1[ch2]]+=1;
                    mp1[ch1]=mp1[ch2];
                }
                else
                {
                    ch2=fin(ch2);
                }
                pf("%lld\n",mp[mp1[ch2]]);
            }
            else if(mp1[ch1]!="\0" && mp1[ch2]!="\0")
            {
                ch1=fin(ch1);
                ch2=fin(ch2);
                if(mp1[ch1]!=mp1[ch2])
                {
                    mp[mp1[ch1]]=(mp[mp1[ch1]]+mp[mp1[ch2]]);
                    mp1[ch2]=ch1;
                }
                pf("%lld\n",mp[mp1[ch1]]);
            }
        }
        mp.clear();
        mp1.clear();
    }
    return 0;
}
//osthir moja

