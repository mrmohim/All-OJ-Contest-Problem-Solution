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

/*.......Global Function.......*/
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
//Ugly Numbers
LL maxDivide(LL a,LL b)
{
    while(a%b==0)
        a=a/b;
    return a;
}
LL isUgly(LL no)
{
    no=maxDivide(no,2);
    no=maxDivide(no,3);
    no=maxDivide(no,5);
    return (no==1)?1:0;
}
//XOR of 2 Numbers
LL myXOR(LL x,LL y)
{
    LL res=0;
    FORR(i,31,0)
    {
        bool b1=x&(1<<i);
        bool b2=y&(1<<i);
        bool xoredBit=(b1&b2)?0:(b1|b2);
        res<<=1;
        res|=xoredBit;
    }
    return res;
}
/*............End............*/
/*.......Global Declaration.......*/
string strings[4];
string lcsBack(int indexes[],int cacheSize, string cache[]);
int calcCachePos(int indexes[], string strings[], int cacheSize);
string lcs()
{
    int max = -1;
    int cacheSize = 1;
    for(int i = 0; i < 3; i++)
    {
        cacheSize *= strings[i].size();
        if (strings[i].size() > max)
            max = strings[i].size();
    }
    string cache[cacheSize];
    int indexes[cacheSize];
    for (int i = 0; i < cacheSize; i++)
        indexes[i] = strings[i].size() - 1;
    return lcsBack(indexes, cacheSize, cache);
}
string lcsBack(int indexes[], int cacheSize, string cache[])
{
    for (int i = 0; i < cacheSize; i++ )
        if (indexes[i] == -1)
            return "";
    bool match = true;
    for (int i = 1; i < cacheSize; i++)
    {
        if (strings[0][indexes[0]] != strings[i][indexes[i]])
        {
            match = false;
            break;
        }
    }
    if (match)
    {
        int newIndexes[cacheSize];
        for (int i = 0; i < cacheSize; i++)
            newIndexes[i] = indexes[i] - 1;
        string result = lcsBack(newIndexes, cacheSize, cache) + strings[0][indexes[0]];
        cache[calcCachePos(indexes, strings, cacheSize)] = result;
        return result;
    }
    else
    {
        string subStrings[cacheSize];
        for (int i = 0; i < cacheSize; i++)
        {
            if (indexes[i] <= 0)
                subStrings[i] = "";
            else
            {
                int newIndexes[cacheSize];
                for (int j = 0; j < cacheSize; j++)
                    newIndexes[j] = indexes[j];
                newIndexes[i]--;
                int cachePos = calcCachePos(newIndexes, strings, cacheSize);
                if (cache[cachePos] == "")
                    subStrings[i] = lcsBack(newIndexes, cacheSize, cache);
                else
                    subStrings[i] = cache[cachePos];
            }
        }
        string longestString = "";
        int longestsize = 0;
        for (int i = 0; i < cacheSize; i++)
        {
            if (cacheSize > longestsize)
            {
                longestString = subStrings[i];
                longestsize = longestString.size();
            }
        }
        cache[calcCachePos(indexes, strings, cacheSize)] = longestString;
        return longestString;
    }
}
int calcCachePos(int indexes[], string strings[],int cacheSize)
{
    int factor = 1;
    int pos = 0;
    for (int i = 0; i < cacheSize; i++)
    {
        pos += indexes[i] * factor;
        factor *= strings[i].size();
    }
    return pos;
}
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    cin>>strings[0]>>strings[1]>>strings[2];
    cout<<lcs();
    return 0;
}
