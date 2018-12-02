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
    LL m,n,i,j,mn,x=0,k=0,l=0,M,G;
    C fao;
    cin>>m>>n;
    C image[n][m+1];
    FOR(i,0,n-1)
    {
        scanf("%s",image[i]);
    }
    mn=m*n;
    for(M=1; M<=mn; )
    {
        if(image[k][l]=='>')
        {
            l++;
            M++;
            G=1;
            if(l>=m)
                break;
        }
        else if(image[k][l]=='v')
        {
            k++;
            M++;
            G=2;
            if(k>=n)
                break;
        }
        else if(image[k][l]=='<')
        {
            l--;
            M++;
            G=3;
            if(l<0)
                break;
        }
        else if(image[k][l]=='^')
        {
            k--;
            M++;
            G=4;
            if(k<0)
                break;
        }
        else if(image[k][l]=='*')
        {
            M=1000;
            break;
        }
        else if(image[k][l]=='.')
        {
            if(G==1)
            {
                l++;
                M++;
                if(l>=m)
                    break;
            }
            else if(G==2)
            {
                k++;
                M++;
                if(k>=n)
                    break;
            }
            else if(G==3)
            {
                l--;
                M++;
                if(l<0)
                    break;
            }
            else if(G==4)
            {
                k--;
                M++;
                if(k<0)
                    break;
            }
        }
    }
    if(M==1000)
        printf("*\n");
    else
        printf("!\n");
    return 0;
}



