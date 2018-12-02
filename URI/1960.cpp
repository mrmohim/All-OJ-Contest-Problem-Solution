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
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    char x[5];
    int lnth;
    lnth = strlen(gets(x));
    if(lnth==3)
    {
        if(x[0]=='1') printf("C");
        else if(x[0]=='2') printf("CC");
        else if(x[0]=='3') printf("CCC");
        else if(x[0]=='4') printf("CD");
        else if(x[0]=='5') printf("D");
        else if(x[0]=='6') printf("DC");
        else if(x[0]=='7') printf("DCC");
        else if(x[0]=='8') printf("DCCC");
        else if(x[0]=='9') printf("CM");
        if(x[1]=='1') printf("X");
        else if(x[1]=='2') printf("XX");
        else if(x[1]=='3') printf("XXX");
        else if(x[1]=='4') printf("XL");
        else if(x[1]=='5') printf("L");
        else if(x[1]=='6') printf("LX");
        else if(x[1]=='7') printf("LXX");
        else if(x[1]=='8') printf("LXXX");
        else if(x[1]=='9') printf("XC");
        if(x[2]=='1') printf("I");
        else if(x[2]=='2') printf("II");
        else if(x[2]=='3') printf("III");
        else if(x[2]=='4') printf("IV");
        else if(x[2]=='5') printf("V");
        else if(x[2]=='6') printf("VI");
        else if(x[2]=='7') printf("VII");
        else if(x[2]=='8') printf("VIII");
        else if(x[2]=='9') printf("IX");
    }
    else if(lnth==2)
    {
        if(x[0]=='1') printf("X");
        else if(x[0]=='2') printf("XX");
        else if(x[0]=='3') printf("XXX");
        else if(x[0]=='4') printf("XL");
        else if(x[0]=='5') printf("L");
        else if(x[0]=='6') printf("LX");
        else if(x[0]=='7') printf("LXX");
        else if(x[0]=='8') printf("LXXX");
        else if(x[0]=='9') printf("XC");
        if(x[1]=='1') printf("I");
        else if(x[1]=='2') printf("II");
        else if(x[1]=='3') printf("III");
        else if(x[1]=='4') printf("IV");
        else if(x[1]=='5') printf("V");
        else if(x[1]=='6') printf("VI");
        else if(x[1]=='7') printf("VII");
        else if(x[1]=='8') printf("VIII");
        else if(x[1]=='9') printf("IX");
    }
    else if(lnth==1)
    {
        if(x[0]=='1') printf("I");
        else if(x[0]=='2') printf("II");
        else if(x[0]=='3') printf("III");
        else if(x[0]=='4') printf("IV");
        else if(x[0]=='5') printf("V");
        else if(x[0]=='6') printf("VI");
        else if(x[0]=='7') printf("VII");
        else if(x[0]=='8') printf("VIII");
        else if(x[0]=='9') printf("IX");
    }
    printf("\n");
    return 0;
}




