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
    int val,tot;
    data()
    {
        val=tot=0;
    }

};
data bal[100008];
data bal2[100008];
int arr[100008];
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    int i,j,k,n,cs,tot,muk;
    scanf("%d",&muk);
    for(cs=1; cs<=muk; cs++)
    {
        int mal=0;
        scanf("%d",&n);
        for(i=0; i<n; i++){
            scanf("%d",&arr[i]);
            if(arr[i]!=0)
                mal=1;
        }
        if(mal==0)
        {
            printf("Case %d: %d\n",cs,n);
            continue;
        }
        k=1;
        int cnt=1;
        for(i=1; i<n; i++)
        {
            bal2[i].tot=0;
            if(arr[i]==arr[i-1])
                cnt++;
            else
            {
                bal[k].val=arr[i-1];
                bal[k].tot=cnt;
                k++;
                cnt=1;
            }
        }
        bal[k].val=arr[i-1];
        bal[k].tot=cnt;
        k++;
//        for(i=0; i<k; i++)
//        {
//            printf("%d(%d), ",bal[i].tot,bal[i].val);
//        }
//        printf("\n");
        int res=-1;
        int l=0;
        bool key = 1;
        bal2[1].tot = 0;
        if(bal[1].val==0)
        {
            key=0;
            bal2[1].tot=bal[1].tot;
        }
        bal2[0].val = 0;
        bal2[0].tot = 0;
//        if(key)
//        {
        for(i=(key)?1:2; i<k; i++)
        {
            if(bal[i].val==0)
            {
                bal2[l].tot+=bal[i].tot;
            }
            else
            {
//                pf("gu8888888888\n");
                l++;
                bal2[l].tot+=bal[i].tot;
                bal2[l].val=bal[i].val;

            }
//            pf("hi.... %d>>>%d %d %d\n",l,bal2[l].tot,bal[i].tot,bal2[l].val);
        }
//       }
//        else
//        {
//            for(i=2; i<k; i++)
//            {
//                if(bal[i].val==0)
//                {
//                    bal2[l++].tot=bal[i-1].tot+bal[i].tot;
//                }
//                else
//                {
//                    bal2[l].tot=bal[i].tot;
//                    bal2[l++].val=bal[i].val;
//
//                }
//            }
//        }
//        for(i=0; i<l; i++)
//        {
//            printf("%d(%d), ",bal2[i].tot,bal2[i].val);
//        }
//        printf("\n");
        cnt = bal2[0].tot;
        for(i=1; i<=l; i++)
        {
            if(bal2[i].val==bal2[i-1].val) cnt+=bal2[i].tot;
            else
            {
                res = max(res,cnt);
                cnt = bal2[i].tot;
            }
        }
        res = max(res,cnt);
        printf("Case %d: %d\n",cs,res);
    }
    return 0;
}


/*
3
2
2 0
3
1 1 2
5
1 3 0 3 1


5
5
0 0 0 0 0
5
1 0 0 0 0
5
0 0 0 0 1
5
1 0 0 0 1
5
0 0 1 0 0
*/

