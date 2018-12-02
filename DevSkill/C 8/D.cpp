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
int main()
{
    //Get the limit for the numbers
    LL MAX_N;
    MAX_N=1000;

    //Compute the primes less or equal than MAX_N
    vector<bool> is_prime(MAX_N + 1,  true);
    for (LL i = 2; i*i <= MAX_N; ++i)
    {
        if (is_prime[i])
        {
            for (LL j = i*i; j <= MAX_N; j += i) is_prime[j] = false;
        }
    }
    vector<LL> prime;
    for (LL i = 2; i <= MAX_N; ++i) if (is_prime[i]) prime.push_back(i);

    //Compute the prefixed sums
    vector<LL> sum(prime.size() + 1, 0);
    for (LL i = 0; i < prime.size(); ++i) sum[i + 1] = sum[i] + prime[i];

    //Get the number of queries
    LL n_queries;
    cin >> n_queries;
    for (LL z = 1; z <= n_queries; ++z)
    {
        LL n;
        cin >> n;

        //Solve the query
        bool found = false;
        for (LL i = 0; i < prime.size() and prime[i] <= n and not found; ++i)
        {

            //Do binary search over the lenght of the sum:
            //For all x < ini, [i, x] sums <= n
            LL ini = i, fin = LL(prime.size()) - 1;
            while (ini <= fin)
            {
                LL mid = (ini + fin)/2;
                LL value = sum[mid + 1] - sum[i];
                if (value <= n) ini = mid + 1;
                else fin = mid - 1;
            }

            //Check the candidate of the binary search
            LL candidate = ini - 1;
            if (candidate >= i and sum[candidate + 1] - sum[i] == n)
            {
                found = true;
                cout << n << " =";
                for (LL j = i; j <= candidate; ++j)
                {
                    cout << " ";
                    if (j > i) cout << "+ ";
                    cout << prime[j];
                }
                cout << endl;
            }
        }

        if (not found) cout << "No solution" << endl;
    }
}


