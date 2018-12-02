#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<iostream>
#include<cctype>
#include<map>
#include<stack>
#include<cstdlib>
#include<queue>
#include<vector>
#include<algorithm>
#include<bitset>
#include<algorithm>
#include<set>
#include<limits.h>

using namespace std;
typedef long int LD;
typedef long long int LLD;
typedef float F;
typedef double LF;
typedef unsigned int U;
typedef unsigned long int LU;
typedef unsigned long long int LLU;
typedef char C;


/*----------simple input section ------------ */
#define sf scanf
#define sfi(x) scanf("%d",&x)
#define sfc(x) scanf("%c",&x)
#define sfi2(x,y) scanf("%d%d",&x,&y)
#define sfll2(x,y) scanf("%lld%lld",&x,&y)
#define sfu2(x,y) scanf("%llu%llu",&x,&y)
#define sfl(x) scanf("%ld",&x)
#define sfll(x) scanf("%lld",&x)
#define sfd(x) scanf("%lf",&x)
#define sfu(x) scanf("%llu",&x)
#define sfs(x) scanf("%s",x)


/*----------simple input section ------------ */
#define pf printf
#define pfi(x) printf("%d\n",x)
#define pfl(x) printf("%ld\n",x)
#define pfll(x) printf("%lld\n",x)
#define pfu(x) printf("%llu\n",x)
#define pfs(x) printf("%s\n",x)
#define pfc(x) printf("%c\n",x)
#define pfd(x) printf("%lf\n",x)

/*----------file input section ------------ */

#define f_input  freopen("input.txt","r",stdin);
#define f_output freopen("output.txt","w",stdout);

#define pb(x) push_back(x)
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define mem(x,y) memset(x,y,sizeof(x))
#define TEST int cs,T;sfi(T);getchar();for(cs=1;cs<=T;cs++)
#define nn printf("\n")
// xx-> diagonal -> 8 horizontal/vertical->4

const int xx[] = {0, 1, 0, -1, -1, 1, -1, 1};
const int yy[] = {1, 0, -1, 0, 1, 1, -1, -1};

// KX-> Knight moves
const int kx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
const int ky[] = {1, 2, 2, 1, -1, -2, -2, -1};


/******** debug **********/
#define chk1 printf("hi......1  \n")
#define chk2 printf("hi......2  \n")




#define mod 1000000007
#define eps 10e-8
#define sz 200005
#define sz1 302
#define sz2 5
/******* start my code ********/
vector<int>v[sz];
map<int,bool>beloon[sz];
bool vis[sz];
int ans[sz];
int mx=1;
queue<int>q;
vector<int>bal;
void bfs(int n)
{
    q.push(1);
    vis[1]=1;
    beloon[1][1]=1;
    ans[1]=1;
    int u,l,i,col,j;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        l=v[u].size();
        for(i=0;i<l;i++)
        {
            if(!vis[v[u][i]])
            {
                q.push(v[u][i]);
                vis[v[u][i]]=1;
                bal.pb(v[u][i]);
            }
            else
            {
                beloon[u][ans[v[u][i]]]=1;
            }
        }
        col=1;
        l=bal.size();
        for(i=0;i<l;i++)
        {
            for(j=col;j<=n;j++)
            {
                if(!beloon[u][j])
                {
                    ans[bal[i]]=j;
                    beloon[u][j]=1;
                    beloon[bal[i]][j]=1;
                    mx=max(mx,j);
                    break;
                }
            }
            col=j;
        }
        bal.clear();
    }
}
int main()
{
    int i,j,k,n,a,b;
    sfi(n);
    for(i=0;i<n-1;i++)
    {
        sfi2(a,b);
        v[a].pb(b);
        v[b].pb(a);
    }
    bfs(n);
    pfi(mx);
    for(i=1;i<=n;i++)
        pf("%d ",ans[i]);
    return 0;
}
/*
6
1 4
1 2
3 1
5 3
3 6
*/
