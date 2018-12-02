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
#include <sstream>

//#include <bits/stdc++.h>


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




#define mod  1000000007
#define eps 10e-8
#define sz 1000002
#define sz1 100002
#define sz2 5
/******* start my code ********/
LLD arr[sz1];

int main()
{
    LLD i,j,sum,n,x,cnt,y;
    bool key;
    TEST
    {
        sfll(n);
        for(i=0;i<n;i++) sfll(arr[i]);
        sort(arr,arr+n);
        x=arr[0];
        sum=cnt=0;
        cnt=1;
        key=0;
        y=0;
        for(i=1;i<n;i++)
        {
            if(x==arr[i]) cnt++;
            else
            {
                sum+=(n-i)*cnt;
                x=arr[i];
                cnt=1;
                key=1;
                //chk1;
            }
            if(cnt>1)
                y=1;
        }
     //   if(key)
        pfll(sum+y);
      //  else pfi(0);
    }
    return 0;
}
