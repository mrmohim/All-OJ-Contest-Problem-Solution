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
LL ch[100010],ar[100010];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m,sum=0,a,b,c,x,y,j;
    sf("%I64d",&n);
    FOR(i,0,n-1)
    {
        sf("%I64d",&ch[i]);
        ar[ch[i]]+=1;
        sum+=ch[i];
    }
    sort(ch,ch+n);
    reverse(ch,ch+n);
    if(ch[n-1]!=0)
        cout<<"-1";
    else
    {
        if(sum%3==0)
        {
            a=0;
            FOR(i,0,n-1)
            {
                if(ch[i]!=0)
                {
                    a+=ar[ch[i]];
                    cout<<ch[i];
                }
                else
                    break;
            }
            if(a>0)
            {
                FOR(j,1,ar[0])
                {
                    cout<<"0";
                }
            }
            else
                cout<<"0";
        }
        else if(sum%3==1)
        {
            a=0;
            for(j=1; j<=7; j+=3)
            {
                if(ar[j]!=0)
                {
                    x=0;
                    FOR(i,0,n-1)
                    {
                        if(ch[i]==j && x==0)
                        {
                            x=1;
                            continue;
                        }
                        cout<<ch[i];
                    }
                    a=1;
                    break;
                }
            }
            if(a==0)
            {
                if(ar[2]>=2)
                {
                    x=0;
                    FOR(i,0,n-1)
                    {
                        if(ch[i]==2 && x<2)
                        {
                            x+=1;
                            continue;
                        }
                        cout<<ch[i];
                    }
                }
                else
                {
                    x=0;
                    y=0;
                    FOR(i,0,n-1)
                    {
                        if(ch[i]==5 && x==0)
                        {
                            x=1;
                            continue;
                        }
                        if(ch[i]==2 && y==0)
                        {
                            y=1;
                            continue;
                        }
                        cout<<ch[i];
                    }
                }
            }
        }
        else if(sum%3==2)
        {
            a=0;
            for(j=2; j<=8; j+=3)
            {
                if(ar[j]!=0)
                {
                    x=0;
                    FOR(i,0,n-1)
                    {
                        if(ch[i]==j && x==0)
                        {
                            x=1;
                            continue;
                        }
                        cout<<ch[i];
                    }
                    a=1;
                    break;
                }
            }
            if(a==0)
            {
                if(ar[1]>=2)
                {
                    x=0;
                    FOR(i,0,n-1)
                    {
                        if(ch[i]==1 && x<2)
                        {
                            x+=1;
                            continue;
                        }
                        cout<<ch[i];
                    }
                }
                else if(ar[1]!=0 && ar[4]!=0)
                {
                    x=0;
                    y=0;
                    FOR(i,0,n-1)
                    {
                        if(ch[i]==4 && x==0)
                        {
                            x=1;
                            continue;
                        }
                        if(ch[i]==1 && y==0)
                        {
                            y=1;
                            continue;
                        }
                        cout<<ch[i];
                    }
                }
                else if(ar[4]>=2)
                {
                    x=0;
                    FOR(i,0,n-1)
                    {
                        if(ch[i]==4 && x<2)
                        {
                            x+=1;
                            continue;
                        }
                        cout<<ch[i];
                    }
                }
                else if(ar[1]!=0 && ar[7]!=0)
                {
                    x=0;
                    y=0;
                    FOR(i,0,n-1)
                    {
                        if(ch[i]==7 && x==0)
                        {
                            x=1;
                            continue;
                        }
                        if(ch[i]==1 && y==0)
                        {
                            y=1;
                            continue;
                        }
                        cout<<ch[i];
                    }
                }
            }
        }
    }
    return 0;
}
