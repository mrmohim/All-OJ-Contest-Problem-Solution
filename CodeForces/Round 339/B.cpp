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
#define mx              100000010
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
C ch1[mx],ch2[mx],c[mx];
void longmulti(const char *a, const char *b, char *c)
{
    int i = 0, j = 0, k = 0, n, carry;
    int la, lb;
    if (!strcmp(a, "0") || !strcmp(b, "0"))
    {
        c[0] = '0', c[1] = '\0';
        return;
    }
    if (a[0] == '-')
    {
        i = 1;
        k = !k;
    }
    if (b[0] == '-')
    {
        j = 1;
        k = !k;
    }
    if (i || j)
    {
        if (k) c[0] = '-';
        longmulti(a + i, b + j, c + k);
        return;
    }
    la = strlen(a);
    lb = strlen(b);
    memset(c, '0', la + lb);
    c[la + lb] = '\0';
#	define I(a) (a - '0')
    for (i = la - 1; i >= 0; i--)
    {
        for (j = lb - 1, k = i + j + 1, carry = 0; j >= 0; j--, k--)
        {
            n = I(a[i]) * I(b[j]) + I(c[k]) + carry;
            carry = n / 10;
            c[k] = (n % 10) + '0';
        }
        c[k] += carry;
    }
#	undef I
    if (c[0] == '0') memmove(c, c + 1, la + lb);
    return;
}
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    int n,m=1,x,y=0,z,i;
    sf("%d",&n);
    ch1[0]='1';
    ch1[1]='\0';
    for(i=1;i<=n;i++)
    {
        getchar();
        sf("%s",ch2);
        if(strcmp(ch2,"0")==0)
            y=1;
        if(y==0 && strcmp(ch2,"1")!=0)
        {
            longmulti(ch1,ch2,c);
            strcpy(ch1,c);
        }
    }
    if(y==1)
        pf("0");
    else
        pf("%s",ch1);
    return 0;
}
