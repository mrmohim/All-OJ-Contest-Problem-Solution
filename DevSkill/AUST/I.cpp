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
LL c[1000];
void multiply(string a, string b )
{
    int len_a = a.length();
    int len_b = b.length();
    for(int i=len_a-1; i>=0; i--)
    {
        for(int j=len_b-1; j>=0; j--)
        {
            c[ i + j + 1 ] += ( b[ j ] - '0') * ( a[ i ] - '0' );
        }
    }

    for(int i=len_a+len_b; i>=0; i--)
    {
        if( c[ i ]>=10 )
        {
            c[i - 1] += c[ i ] / 10;
            c[ i ] %= 10;
        }
    }
}
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LLU n,m,x,s;
    string s1,s2;
    C s3[100];
    TEST(tt,t)
    {
        cin>>s1;
        s2=s1;
        x=s1.length();
        FORR(i,x-1,0)
        {
            if(s2[i]!='0')
            {
                s2[i]=s2[i]-1;
                break;
            }
            else
                s2[i]='9';
        }
        multiply(s1,s2);
        n=0;
        m=-1;
        FOR(i,0,x*2-1)
        {
            if(c[i]!=0 && n==0)
                n=1;
            if(n==1)
            {
                m+=1;
                s3[m]=c[i]+'0';
            }
        }
        s3[m+1]='\0';

        mem(c,0);
    }
    return 0;
}
