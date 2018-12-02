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
char s[1000010],t[1000010],ch;
int main()
{
    int i=0,w=0;
    scanf("%c",&ch);
    while(true)
    {
        if(ch!='0' || w==1)
            s[i++]=ch;
        if(ch!='0')
            w=1;
        scanf("%c",&ch);
        if(ch=='\n')
            break;
    }
    s[i]='\0';
    i=0,w=0;
    scanf("%c",&ch);
    while(true)
    {
        if(ch!='0' || w==1)
            t[i++]=ch;
        if(ch!='0')
            w=1;
        scanf("%c",&ch);
        if(ch=='\n')
            break;
    }
    t[i]='\0';

    int f,g;
    f=strlen(s);
    g=strlen(t);
    if(f>g)
    {
        printf(">");
        return 0;
    }
    else if(f<g)
    {
        printf("<");
        return 0;
    }
    else
    {
        for(i=0; i<f; i++)
        {
            if(s[i]>t[i])
            {
                printf(">");
                return 0;
            }
            else if(s[i]<t[i])
            {
                printf("<");
                return 0;
            }
        }
    }
    printf("=");
}
