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
class data
{
public:
    int x;
    char ch;
    data()
    {
        x=0;
        ch = '\0';
    }
};
data mark[30];
bool compare(data a,data b)
{
    if(a.x==b.x)
        return a.ch<b.ch;
    else
        return a.x>b.x;
}
char str[100005];
int ar[10][6];
char ch[9][18];
int arr[][2]= {{1,6},{1,10},{3,1},{3,6},{3,10},{5,1},{5,6},{5,10},{1,7},{1,11},{3,2},{3,7},{3,11},{5,2},{5,7},{5,11},{1,8},{1,12},{3,3},{3,8},{3,12},{5,3},{5,8},{5,12},{5,4},{5,13}};
int arr1[][2]= {{1,6},{1,7},{1,8},{1,10},{1,11},{1,12},{3,1},{3,2},{3,3},{3,6},{3,7},{3,8},{3,10},{3,11},{3,12},{5,1},{5,2},{5,3},{5,4},{5,6},{5,7},{5,8},{5,10},{5,11},{5,12},{5,13}};
int main()
{
    int i,j,k,n,x,y;
    TEST(tt,t)
    {
        for(i=0; i<26; i++) mark[i].x=0,mark[i].ch='a'+i;
        sf("%s",str);
        int run=0;
        for(i=0; str[i]; i++)
        {
            y=str[i]-'a';
            mark[y].x++;
            mark[y].ch=str[i];

        }
        sort(mark,mark+26,compare);
        mem(ch,'#');
        for(i=1; i<=6; i+=2)
        {
            ch[i][1]=ch[i][2]=ch[i][3]=ch[i][4]=ch[i][6]=ch[i][7]=ch[i][8]=ch[i][10]=ch[i][11]=ch[i][12]=ch[i][13]='.';
        }
        FOR(k,0,25)
        {
            if(mark[k].x!=0)
                ch[arr[k][0]][arr[k][1]]=mark[k].ch;
            else
            {
                FOR(i,0,25)
                {
                    if(ch[arr1[i][0]][arr1[i][1]]=='.')
                    {
                        ch[arr1[i][0]][arr1[i][1]]=mark[k].ch;
                        k+=1;
                    }
                }
                break;
            }
        }
        pf("Case %lld:\n",tt);
        FOR(i,0,6)
        {
            FOR(j,0,14)
            {
                pf("%c",ch[i][j]);
            }
            pf("\n");
        }
    }
    return 0;
}

/*
2
baacbabbc



*/

