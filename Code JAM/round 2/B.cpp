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

#define pub              push_back
#define pob              pop_back
/*.......Global Function.......*/
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
//BIG Fibonacci
//map<LLU,LL> FFF;
//LLU fff(LLU n)
//{
//    if (FFF.count(n)) return FFF[n];
//    LLU k=n/2;
//    if (n%2==0)   // n=2*k
//    {
//        return FFF[n] = (fff(k)*fff(k) + fff(k-1)*fff(k-1)) % mod;
//    }
//    else     // n=2*k+1
//    {
//        return FFF[n] = (fff(k)*fff(k+1) + fff(k-1)*fff(k)) % mod;
//    }
//}//must be define in main function (FFF[0]=FFF[1]=1)
/*............End............*/
/*.......Global Declaration.......*/
string st,st1;
LL ar[10],ar1[100];
int main()
{
    READ("B-small-practice.in");
    WRITE("output.txt");
    LL n,m,a,b,c,d;
    TEST(tt,t)
    {
        cin>>n;
        st="XROYGBV";
        st1="";
        FOR(i,1,6)
        {
            cin>>ar[i];
        }
        FOR(i,1,5)
        {
            FOR(j,1,6-i)
            {
                if(ar[j]<ar[j+1])
                {
                    swap(ar[j],ar[j+1]);
                    swap(st[j],st[j+1]);
                }
            }
        }
        FOR(i,1,6)
        {
            ar1[st[i]]=ar[i];
        }
        a=0;
        FOR(i,0,n-1)
        {
            b=0;
            FOR(j,1,6)
            {
                if(ar1[st[j]]==0)
                {
                    b+=1;
                    continue;
                }
                else
                {
                    if(i==0)
                    {
                        st1+=st[j];
                        ar1[st[j]]-=1;
                        break;
                    }
                    else if(i==1 && st1[i-1]!=st[j])
                    {
                        st1+=st[j];
                        ar1[st[j]]-=1;
                        break;
                    }
                    else if(st1[i-1]!=st[j])
                    {
                        if(((st1[i-1]=='R' && st1[i-2]=='B') || (st1[i-1]=='B' && st1[i-2]=='R')) && st[j]=='V')
                        {
                            st1+='V';
                            swap(st1[i],st1[i-1]);
                        }
                        else if(((st1[i-1]=='R' && st1[i-2]=='Y') || (st1[i-1]=='Y' && st1[i-2]=='R')) && st[j]=='O')
                        {
                            st1+='O';
                            swap(st1[i],st1[i-1]);
                        }
                        else if(((st1[i-1]=='B' && st1[i-2]=='Y') || (st1[i-1]=='Y' && st1[i-2]=='B')) && st[j]=='G')
                        {
                            st1+='G';
                            swap(st1[i],st1[i-1]);
                        }
                        else
                            st1+=st[j];
                        ar1[st[j]]-=1;
                    }
                }
            }
            if(b==6 && st1.size()!=n)
            {
                a=1;
                break;
            }
        }
        if(a==1 || (st1[n-1]==st1[0]) || (((st1[n-1]=='B' && st1[n-2]=='Y') || (st1[n-1]=='Y' && st1[n-2]=='B')) && st[0]=='G') || (((st1[n-1]=='B' && st1[0]=='Y') || (st1[n-1]=='Y' && st1[0]=='B')) && st[n-2]=='G') || (((st1[n-1]=='R' && st1[n-2]=='Y') || (st1[n-1]=='Y' && st1[n-2]=='R')) && st[0]=='O') || (((st1[n-1]=='R' && st1[0]=='Y') || (st1[n-1]=='Y' && st1[0]=='R')) && st[n-2]=='O') || (((st1[n-1]=='B' && st1[n-2]=='R') || (st1[n-1]=='R' && st1[n-2]=='B')) && st[0]=='V') || (((st1[n-1]=='B' && st1[0]=='R') || (st1[n-1]=='R' && st1[0]=='B')) && st[n-2]=='V'))
        {
            pf("Case #%lld: IMPOSSIBLE\n",tt);
        }
        else
        {
            pf("Case #%lld: ",tt);
            cout<<st1<<endl;
        }
        mem(ar,0);
        mem(ar1,0);
    }
    return 0;
}


