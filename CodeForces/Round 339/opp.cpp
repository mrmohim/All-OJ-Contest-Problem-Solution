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


#define itc(n) char(n+48)
#define cti(ch) (ch-48)
string itos(LL n)
{
    ostringstream convert;
    convert<<n;
    return convert.str();
}
string add(string s1, string s2)
{
    int len1=s1.length(), len2=s2.length();
    if(len1<len2)                                   //s1 should be of greater length than s2
        return add(s2, s1);
    string ans="";
    int carry=0, i, s;
    for(i=1; i<=len1; i++)
    {
        s = carry+cti(s1[len1-i]);

        if(i<=len2)
            s += cti(s2[len2-i]);

        ans = itc(s%10)+ans;                        //finding the character to be added to the ans
        carry = s/10;                               //finding the carry
    }
    if(carry!=0)
        ans = itc(carry)+ans;

    return ans;
}
string multiply(string s1, string s2)
{
    int len1=s1.length(), len2=s2.length();
    if(len1<len2)
        return multiply(s2,s1);
    int i,j,p, carry=0;
    string result, net="", c;
    for(i=len2-1; i>=0; i--)
    {
        carry=0;
        result="";
        c="";
        for(j=len1-1; j>=0; j--)
        {
            p=cti(s1[j])*cti(s2[i]);
            result = itc((p+carry)%10)+result;
            carry=(p+carry)/10;
        }
        if(carry!=0)
        {
            c=itos(carry);
            result=c+result;

        }
        for(j=i; j<len2-1; j++)
            result+="0";

        net=add(net,result);
    }
    return net;
}
/*............End............*/
/*.......Global Declaration.......*/
string str1,str2;
int main()
{
    //READ("input.txt");
    //WRITE("output.txt");
    LL n,m=1,x,y=0,z;
    sf("%I64d",&n);
    str1="1";
    FOR(i,1,n)
    {
        cin>>str2;
        if(str2=="0")
            y=1;
        if(y==0)
        {
            str1=multiply(str1, str2);
        }
    }
    if(y==1)
        pf("0");
    else
        cout<<str1;
    return 0;
}

