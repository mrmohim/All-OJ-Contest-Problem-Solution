#include <bits/stdc++.h>

#define pb push_back
#define all(x) x.begin(),x.end()
#define ms(a,v) memset(a,v,sizeof a)
#define II ({int a; scanf("%d", &a); a;})
#define LL ({Long a; scanf("%lld", &a); a;})
#define DD ({double a; scanf("%lf", &a); a;})
#define ff first
#define ss second
#define mp make_pair
#define EPS 1e-10
#define pi 3.1415926535897932384626433832795
using namespace std;

#define FI freopen ("in.txt", "r", stdin)
#define FO freopen ("out.txt", "w", stdout)

typedef long long Long;
typedef unsigned long long ull;
typedef vector<int> vi ;
typedef set<int> si;
typedef vector<Long>vl;
typedef pair<int,int>pii;
typedef pair<string,int>psi;
typedef pair<Long,Long>pll;
typedef pair<double,double>pdd;

#define forab(i, a, b)	for (__typeof (b) i = (a) ; i <= b ; ++i)
#define rep(i, n)		forab (i, 0, (n) - 1)
#define For(i, n)		forab (i, 1, n)
#define rofba(i, a, b)	for (__typeof (b)i = (b) ; i >= a ; --i)
#define per(i, n)		rofba (i, 0, (n) - 1)
#define rof(i, n)		rofba (i, 1, n)
#define forstl(i, s)	for (__typeof ((s).end ()) i = (s).begin (); i != (s).end (); ++i)

#ifdef LOCAL
#define __(args...) {dbg,args; cerr<<endl;}
struct debugger
{
    template<typename T> debugger& operator , (const T& v)
    {
        cerr<<v<<"\t";
        return *this;
    }
} dbg;
#define __1D(a,n) rep(i,n) { if(i) printf(" ") ; cout << a[i] ; }
#define __2D(a,r,c,f) forab(i,f,r-!f){forab(j,f,c-!f){if(j!=f)printf(" ");cout<<a[i][j];}cout<<endl;}
#endif
template<class A, class B> ostream &operator<<(ostream& o, const pair<A,B>& p)
{
    return o<<"("<<p.ff<<", "<<p.ss<<")";   //Pair print
}
template<class T> ostream& operator<<(ostream& o, const vector<T>& v)
{
    o<<"[";    //Vector print
    forstl(it,v)o<<*it<<", ";
    return o<<"]";
}
template<class T> ostream& operator<<(ostream& o, const set<T>& v)
{
    o<<"[";    //Set print
    forstl(it,v)o<<*it<<", ";
    return o<<"]";
}

//Fast Reader
template<class T>inline bool read(T &x)
{
    int c=getchar();
    int sgn=1;
    while(~c&&c<'0'||c>'9')
    {
        if(c=='-')sgn=-1;
        c=getchar();
    }
    for(x=0; ~c&&'0'<=c&&c<='9'; c=getchar())x=x*10+c-'0';
    x*=sgn;
    return ~c;
}

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
//int dx[]={2,1,-1,-2,-1,1};int dy[]={0,1,1,0,-1,-1}; //Hexagonal Direction

vector<string>Split(string s )
{
    vector<string>ret;
    istringstream ss(s) ;
    string token ;
    while(ss >> token) ret.pb( token ) ;
    return ret;
}
const int MX = 10007;

int len[MX];
char s[MX];
vector<string>Ans[MX];
int main()
{
    int pos = 0 ;
    while( gets(s) )
    {
        vector<string>ret = Split(s);
        Ans[pos++] = ret ;
        int n = ret.size();
        rep(i,n) len[i] = max(len[i],(int)ret[i].size());
    }
    rep(i,pos)
    {
        vector<string>ret = Ans[i];
        int n = ret.size();
        rep(j,n-1)
        {
            printf("%s",ret[j].c_str());
            int sp = len[j] - ret[j].size() + 1 ;
            rep(x,sp)printf(" ");
        }
        printf("%s\n",ret[n-1].c_str());
    }

}
