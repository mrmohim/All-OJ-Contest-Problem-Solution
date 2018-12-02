/*************************************************************************************
                         ---------------------------
                   ------Bismillahir-Rahmanir-Rahim------
                         ---------------------------
            //     //   Name: MD: MEHEDI HASAN              //     //
           //     //    Institute: HSTU                    //     //
          //     //     Dept.: CSE                        //     //
         //     //      Email: mehedi1502032@gmail.com   //     //
    -----------------------------------------------------------------------
            ---------- I Love Programming as Gaming ----------
**************************************************************************************/
#include<bits/stdc++.h>
using namespace std;

#define loop(a,b,c) for(int a=b;a<c;a++)
#define lloop(a,b,c) for(long long a=b;a<c;a++)
#define rloop(a,b,c) for(int a=c-1;a>=b;a--)
#define rlloop(a,b,c) for(long long a=c-1;a>=b;a--)
#define mem(ar,value) memset(ar,value,sizeof(ar))
#define EPS 1e-9
#define PI acos(-1)
#define rn PI/180
#define TC(t) scanf("%d",&t);while(t--)
#define sf scanf
#define pf printf
#define SIZE 100001
#define sp ' '
#define nl printf("\n")
#define pb push_back
#define pp pop_back
#define mp make_pair
#define ff first
#define ss second
#define gcd(a,b) __gcd(a,b)
#define b_s(v,x) binary_search(v.begin(),v.end(),x)
#define l_b(v,x) lower_bound(v.begin(),v.end(),x)
#define u_b(v,x) upper_bound(v.begin(),v.end(),x)
#define e_r(v,x) equal_range(v.begin(),v.end(),x)
#define faster ios_base::sync_with_stdio(0);cin.tie(false);cout.tie(false);

/// ASCII Vlaue....
/// A=65,Z=90,a=97,z=122,0=48,9=57
///#define INT_MAX 2147483647
///#define INT_MIN -2147483647


const int MOD=1000000007;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int>vi;
typedef vector<ll>vl;
typedef vector<string> vs;
typedef stack<int> si;
typedef stack<string> ss;
typedef queue<int> qi;
typedef queue<string> qs;
typedef pair<int,int> pii;
typedef pair<string,int>psi;
typedef map<int,int>mii;
typedef map<string,int>msi;
///      direction
int x4[]= {1,-1,0,0};
int y4[]= {0,0,1,-1};
int x8[]= {0,0,+1,-1,-1,+1,-1,+1};
int y8[]= {-1,+1,0,0,+1,+1,-1,-1};


/**ll nCr(ll aan, ll aar)
{
    ll ii, aac=1;
    for(ii=1; ii<=aar; ii++)
    {
        aac*=(aan-aar+ii);
        aac/=ii;
    }
    return aac;
}

bool status[1100002];
void siv()
{
	int N=1000000;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=1;
}

ll big_mod(ll base, ll power, ll mod)
{
    if(power==0) return 1;
    if(power&1)
    {
        ll p1=base%mod;
        ll p2=(big_mod(base, power-1,mod))%mod;
        return (p1*p2)%mod;
    }
    else
    {
        ll p1=(big_mod(base,power/2,mod))%mod;
        return (p1*p1)%mod;
    }
}
ll modInverseBigMod(ll a,ll m)  //a*x=1(mod m)
{
    return big_mod(a,m-2,m);
}**/

///START YOUR CODE FROM HERE.... Happy Coding.... ! ;)


int main()
{
    faster   ///Don't use scanf and printf;
    int t;
    cin>>t;
    while(t--)
    {
        string s,a;
        cin>>s;
        int l=s.size();
        a="";
        loop(i,0,l)
        {
            if(s[i]!='=') a+=s[i];
        }
        int mx=-1,a1=0,a2=0;
        l=a.size();
        loop(i,0,l)
        {
            if(a[i]=='<')
            {
                a1+=1;
                mx=max(mx,a2);
                a2=0;
            }
            else
            {
                a2+=1;
                mx=max(mx,a1);
                a1=0;
            }
        }
        cout<<mx+1<<endl;
    }
    return 0;
}
