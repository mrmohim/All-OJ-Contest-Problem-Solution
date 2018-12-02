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

#define sf scanf
#define sfi(x) scanf("%d",&x)
#define sfc(x) scanf("%c",&x)
#define sfi2(x,y) scanf("%d%d",&x,&y)
#define sfl(x) scanf("%ld",&x)
#define sfll(x) scanf("%lld",&x)
#define sfu(x) scanf("%llu",&x)
#define sfs(x) scanf("%s",x)
#define pf printf
#define pfi(x) printf("%d\n",x)
#define pfl(x) printf("%ld\n",x)
#define pfll(x) printf("%lld\n",x)
#define pfu(x) printf("%llu\n",x)
#define pfs(x) printf("%s\n",x)
#define pfc(x) printf("%c\n",x)
#define pb(x)     push_back(x)
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define nn printf("\n")
// xx-> diagonal -> 8 horizontal/vertical->4

const int xx[] = {0, 1, 0, -1, -1, 1, -1, 1};
const int yy[] = {1, 0, -1, 0, 1, 1, -1, -1};

// KX-> Knight moves
const int kx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
const int ky[] = {1, 2, 2, 1, -1, -2, -2, -1};

/******** debug **********/
#define chk1  printf("hi......1\n")
#define chk2  printf("hi......2\n")

#define mod 1000003
#define eps 10e-8
#define sz 1000005
#define sz1 104
#define sz2 15
/*******   start my code   ********/
vector<int>v;
int main()
{
    int i,j,k,n,x,y,z;
    sfi(n);
    x=n;
    while(x>0)
    {
        y=0;
        z=1;
        while(z<=x)
        {
            y++;
            z=(2*z);
        }
        v.pb(y);
        x-=(z/2);
    }
    k=v.size();
    for(i=0; i<k; i++)
        pf("%d ",v[i]);
    return 0;
}
