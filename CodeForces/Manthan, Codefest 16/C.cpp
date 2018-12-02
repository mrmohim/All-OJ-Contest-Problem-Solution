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

/*............End............*/
/*.......Global Declaration.......*/

int f[1000007],ar[10005];
char txt[10005],pattern[100001][1001];
int a;
/*.......Global Function.......*/

void failure_function(char *pattern)
{
    mem(f,0);
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
                txt[ret]=a+'0';
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
char ch[10001];
int main()
{
    LL n,m,x,y,b;
    cin>>n;
    cin>>txt;
    cin>>m;
    for(a=0; a<m; a++)
    {
        cin>>pattern[a];
        for(b=0; b<strlen(pattern[a]); b++)
        {
            ch[b]=pattern[a][b];
            if(isupper(ch[b]))
                ch[b]=tolower(ch[b]);
        }
        ch[b]='\0';
        reverse(ch,ch+strlen(ch));
        failure_function(ch);
        KMP_match(txt,ch);
    }
    for(a=0; a<n; a++)
    {
        if(isdigit(txt[a]))
        {
            x=txt[a]-'0';
            if(ar[x]==0)
            {
                ar[x]=1;
                cout<<pattern[x]<<" ";
            }
        }
    }
    return 0;
}
