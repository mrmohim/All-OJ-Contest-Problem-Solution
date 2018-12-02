#include <bits/stdc++.h>
//file stream
#define output(name) freopen(name,"w",stdout)
#define input(name) freopen(name,"r",stdin)
//functions
#define pb(x)  push_back(x)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
// pair
#define xx first
#define yy second
#define mp(x,y) make_pair(x,y)
//input
#define sc1(n) cin>>n
#define sc2(n,m) cin>>n>>m
#define sc3(n,m,k) cin>>n>>m>>k
#define sc4(n,m,k,l) cin>>n>>m>>k>>l
#define SCN     scanf
//output 1 var
#define pr1(n) cout<<n<<endl
#define pd1(n,pre) printf("%.*f",pre,n)
//output 2 var
#define pr2(n,m) cout<<n<<" "<<m<<endl
#define pd2(n,m,pre) printf("%.*f %.*f",pre,n,pre,m)
//inputs 3 var less important
#define pr3(n,m,l) cout<<n<<" "<<m<<" "<<l<<endl
#define pr4(n,m,l,k) cout<<n<<" "<<m<<" "<<l<<" "<<k<<endl
//output misc
#define nline() putchar(10)
#define space() putchar(' ')
#define pch(c) putchar(c)
#define tcase(i) printf("Case %d:",i)
#define PRF     printf
#define dbg()   printf("-----------")
//loop
#define fr0(i,n) for(i=0;i<n;i++)
#define fr1(i,n) for(i=1;i<=n;i++)
#define fri(i,ini,limit,inc) for(i=ini;i<=limit;i+=(inc))
#define frd(i,ini,limit,dec) for(i=ini;i>=limit;i-=(dec))
//to compile in codeblocks , c++ flag must be off
//additional, only work if compiled with gcc compiler
#define frf(c, it) for(typeof((c).begin()) it = (c).begin(); it != (c).end(); it++)
#define frr(c, it) for(typeof((c).rbegin()) it = (c).rbegin(); it != (c).rend(); it++)
//memory reset
#define set0(x) memset(x,0,sizeof x)
#define setn1(x) memset(x,-1,sizeof x)
#define setinf(x) memset(x,125,sizeof x)
//misc
#define SZ(v)   ((int) (v).size())
#define all(v)  (v).begin(), (v).end()
//bit operation single variable
#define On(x,i)  (x|=(1<<(i)))
#define Off(x,i) (x&= ~(1<<(i)))
#define isOn(x,i) (x&(1<<(i)))
#define Toggle(x,i) (x^=(1<<(i)))
#define tmod(x,i)  (x&(~(-1<<i)))
//bit operation array
//data type
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
//constant
const double EPS = 1e-9;
int inf=9999999;
char a[100099];
bool vis[100099][5][2];
int mem[100099][5][2],n;
int dp(int i=0,int sum=0,bool on=0)
{
    if(i==n)
    {
        if(!on) return inf;
        else
        {
            if(!sum) return 0;
            else return inf;
        }
    }
    if(~mem[i][sum][on])return mem[i][sum][on];

    int ans1=1+dp(i+1,sum,on);
    int ans2=inf;
    if(on || a[i]!='0')ans2=dp(i+1,(sum+a[i]-'0')%3,1);
    if(ans1<ans2)
    {
        vis[i][sum][on]=0;
        return mem[i][sum][on]=ans1;
    }else
    {
        vis[i][sum][on]=1;
        return mem[i][sum][on]=ans2;
    }


}

int i,j,k,l,m,sum,on;
int main()
{//ios_base::sync_with_stdio(false);cin.tie(NULL);


    setn1(mem);
    sc1(a);
    n=strlen(a);


    m=dp();

    i=0;sum=0;on=0;


    if(m<inf)while(i<n)
    {
        if(vis[i][sum][on])
        {
            pch(a[i]);
            sum+=(a[i]-'0');
            sum%=3;
            on=1;
        }
        i++;
    }else
    {
        fr0(i,n)
        {
            if(a[i]=='0')
            {
                pch('0');
                break;
            }

        }
        if(i==n)pr1(-1);
    }

    //if(!on)
    nline();

    return 0;
}
