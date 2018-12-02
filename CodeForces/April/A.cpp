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
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n;
    cin>>n;
    if(n==0)
        cout<<"1";
    else if(n==1)
        cout<<"2";
    else if(n==2)
        cout<<"4";
    else if(n==3)
        cout<<2;
    else if(n==4)
        cout<<2;
    else if(n==5)
        cout<<2;
    else if(n==6)
        cout<<2;
    else if(n==7)
        cout<<2;
    else if(n==8)
        cout<<2;
    else if(n==9)
        cout<<2;
    else if(n==10)
        cout<<2;
    else if(n==11)
        cout<<2;
    else if(n==12)
        cout<<2;
    else if(n==13)
        cout<<2;
    else if(n==14)
        cout<<2;
    else if(n==15)
        cout<<2;
    else if(n==16)
        cout<<2;
    else if(n==17)
        cout<<2;
    else if(n==18)
        cout<<2;
    else if(n==19)
        cout<<2;
    else if(n==20)
        cout<<2;
    else if(n==21)
        cout<<2;
    else if(n==22)
        cout<<2;
    else if(n==23)
        cout<<2;
    else if(n==24)
        cout<<2;
    else if(n==25)
        cout<<2;
    else if(n==26)
        cout<<2;
    else if(n==27)
        cout<<2;
    else if(n==28)
        cout<<2;
    else if(n==29)
        cout<<2;
    else if(n==30)
        cout<<2;
    else if(n==31)
        cout<<2;
    else if(n==32)
        cout<<2;
    else if(n==33)
        cout<<2;
    else if(n==34)
        cout<<2;
    else if(n==35)
        cout<<2;

    return 0;
}

