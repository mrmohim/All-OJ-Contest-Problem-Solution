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
int f[107];
char txt[107],pattern[107],txt1[107];
void failure_function(char *pattern)
{
    f[0]=0;
    int k=1,len=0,len_p=strlen(pattern);
    while(k<len_p)
    {
        if(pattern[k]==pattern[len])
            f[k++]=++len;
        else
        {
            if(len)
                len=f[len-1];
            else
                f[k++]=0;
        }
    }
    return;
}
void KMP_match(char *txt, char *pattern)
{
    int i=0,j=0,ret=-1;
    int let_t=strlen(txt),len_p=strlen(pattern);
    while(i<let_t)
    {
        if(txt[i]==pattern[j])
        {
            i++;
            j++;
            if(j==len_p)
            {
                ret=i-len_p;
                if(txt1[ret]!='-')
                    txt1[ret]='*';
                txt1[ret+1]='-';
                txt1[ret+2]='-';
                j=f[j-1];
            }
        }
        else
        {
            if(j)
                j=f[j-1];
            else
                i++;
        }
    }
}
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m,x;
    cin>>n;
    cin>>txt;
    mem(txt1,'+');
    pattern[0]='o';
    pattern[1]='g';
    pattern[2]='o';
    pattern[3]='\0';
    failure_function(pattern);
    KMP_match(txt,pattern);
    x=0;
    FOR(i,0,n-1)
    {
        if(txt1[i]=='+')
            pf("%c",txt[i]);
        if(txt1[i]=='*')
            pf("***");
    }
    return 0;
}

