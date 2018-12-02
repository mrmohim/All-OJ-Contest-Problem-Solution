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
#define FOR(i, b, n)    for(int i=b; i<=n; i++)
#define FORR(i, n, b)   for(int i=n; i>=b; i--)
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
#define TEST(i,t)       LL i,t;scanf("%d",&t);for(i=1;i<=t;i++)

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
#define MAXN 1000006
int spf[MAXN+1];
map<int,int>arr;
void sieve()
{
    spf[1] = 1;
    for(int i=2; i<MAXN; i++)
        spf[i]=i;
    for(int i=4; i<MAXN; i+=2)
        spf[i]=2;
    for(int i=3; i*i<MAXN; i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i; j<MAXN; j+=i)
            {
                if(spf[j]==j)
                    spf[j]=i;
            }
        }
    }
}
vector <int> tree[3*2000000];
void build(int node,int lo,int hi)
{
    if(hi==lo)
    {
        tree[node].pub(arr[lo]);
        return ;
    }
    int mid = (lo+hi)/2;
    build(2*node,lo,mid);
    build(2*node+1,mid+1,hi);
    tree[node].resize(tree[2*node].size()+tree[2*node+1].size());
    merge(tree[2*node].begin(),tree[2*node].end(),tree[2*node+1].begin(),tree[2*node+1].end(),tree[node].begin());
}
int query(int node,int lo,int hi,int x,int y,int k)
{
    if(lo>y||hi<x) return 0 ;
    if(lo>=x&&hi<=y)
    {
        return  tree[node].end() - upper_bound(tree[node].begin(),tree[node].end(),k) ;
    }
    int mid = (lo+hi)/2;
    return query(2*node,lo,mid,x,y,k) + query(2*node+1,mid+1,hi,x,y,k);
}
int mp[100003][3];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    sieve();
    int n,m,a,b,c,x,y,z,q,l,r,s,u,v;
    sf("%d",&n);
    a=0;
    FOR(i,1,n)
    {
        sf("%d",&x);
        v=x;
        while(x!=1)
        {
            a+=1;
            arr[a]=spf[x];
            if(v==x)
                mp[i][1]=a;
            x=x/spf[x];
            if(x==1)
                mp[i][2]=a;
        }
    }
    build(1,1,a);
    sf("%d",&q);
    int last_ans=0;
    FOR(i,1,q)
    {
        sf("%d%d%d%d",&l,&r,&x,&y);
        x-=1;
        u = mp[l][1];
        v = mp[r][2];
        x = x;
        last_ans = query(1,1,a,u,v,x);
        s=last_ans;
        last_ans = query(1,1,a,u,v,y);
        pf("%d\n",s-last_ans);
    }
    return 0;
}
