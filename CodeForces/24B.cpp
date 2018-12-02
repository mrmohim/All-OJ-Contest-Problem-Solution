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
LL ar[]= {0,25, 18, 15, 12, 10, 8, 6, 4, 2, 1};
map<string,LL> mp1;
map<string,map<LL,LL> > mp2;
string ch[21][51],chp,chc,all[1001],chm;
LL n[21];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL m,a,b,y,l,t,mxn,mxp,mxst=0,w;
    mxn=0;
    mxp=0;
    cin>>t;
    FOR(j,1,t)
    {
        cin>>n[j];
        FOR(i,1,n[j])
        {
            cin>>ch[j][i];
            a=0;
            FOR(l,1,mxst)
            {
                if(all[l]==ch[j][i])
                {
                    a=1;
                    break;
                }
            }
            if(a==0)
            {
                mxst+=1;
                all[mxst]=ch[j][i];
            }
            mp2[ch[j][i]][i]+=1;
            if(i<=10)
            {
                mp1[ch[j][i]]+=ar[i];
            }
        }
        if(n[j]>mxn)
        {
            mxn=n[j];
        }
    }
    FOR(i,1,mxst-1)
    {
        FOR(j,1,mxst-i)
        {
            if(mp1[all[j]]<=mp1[all[j+1]])
            {
                swap(all[j],all[j+1]);
            }
        }
    }
    w=mxst;
    if(mp1[all[1]]==mp1[all[2]])
    {
        b=0;
        y=0;
        m=mp1[all[1]];
        FOR(i,1,mxst)
        {
            if(m!=mp1[all[i]])
            {
                mxst=i-1;
                break;
            }
        }
        while(b==0)
        {
            y+=1;
            FOR(i,1,mxst-1)
            {
                FOR(j,1,mxst-i)
                {
                    if(mp2[all[j]][y]<=mp2[all[j+1]][y])
                    {
                        swap(all[j],all[j+1]);
                    }
                }
            }
            if(mp2[all[1]][y]>mp2[all[2]][y])
            {
                break;
            }
            else
            {
                m=mp2[all[1]][y];
                FOR(i,1,mxst)
                {
                    if(m!=mp2[all[i]][y])
                    {
                        mxst=i-1;
                        break;
                    }
                }
            }
        }
    }
    chp=all[1];
    FOR(i,1,w-1)
    {
        FOR(j,1,w-i)
        {
            if(mp2[all[j]][1]<=mp2[all[j+1]][1])
            {
                swap(all[j],all[j+1]);
            }
        }
    }
    if(mp2[all[1]][1]==mp2[all[2]][1])
    {
        b=0;
        y=1;
        m=mp1[all[1]];
        FOR(i,1,w)
        {
            if(m!=mp2[all[i]][y])
            {
                w=i-1;
                break;
            }
        }
        while(b==0)
        {
            y+=1;
            FOR(i,1,w-1)
            {
                FOR(j,1,w-i)
                {
                    if(mp1[all[j]]<=mp1[all[j+1]])
                    {
                        swap(all[j],all[j+1]);
                    }
                }
            }
            if(mp1[all[1]]>mp1[all[2]])
            {
                break;
            }
            else
            {
                m=mp1[all[1]];
                FOR(i,1,w)
                {
                    if(m!=mp1[all[i]])
                    {
                        w=i-1;
                        break;
                    }
                }
            }
        }
    }
    chc=all[1];
    cout<<chp<<endl<<chc<<endl;
    return 0;
}


