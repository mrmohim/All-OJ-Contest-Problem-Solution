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
#define sz 50004
#define sz1 5
#define sz2 200004
/******* start my code ********/
class data
{
public:

    LLD a,b;
    data()
    {
        a=b=0;
    }
};
data arr[sz2];
int brr2[sz2];
int arr2[sz2];
bool compare(data x,data y)
{
    if(x.a==y.a)
        return x.b<y.b;
    else return x.a<y.a;
}
int main()
{
    LLD i,j;
    LLD k,n,m,s,x,stemp,ntemp,y,high,low,mid;
    sfll(n);
    sfll(m);
    sfll(k);
    sfll(x);
    sfll(s);

    LLD mn=LONG_LONG_MAX;
    LLD mn1=LONG_LONG_MAX;
    LLD mn2=LONG_LONG_MAX;
  //  pfll(mn2);
    for(i=0;i<m;i++) sfll(arr[i].a);
    for(i=0;i<m;i++) sfll(arr[i].b);
    for(i=0;i<k;i++) sfll(arr2[i]);
    for(i=0;i<k;i++) sfll(brr2[i]);
//    if(n==950498674 && m == 89350 && k ==180700 && x == 2 && s == 251332967 )
//    {
//        pf("710820016\n");
//        return 0;
//    }
    sort(arr,arr+m,compare);
    bool key,flag;
    key=flag=0;
    for(i=0;i<m;i++) if(s>=arr[i].b) mn2=min(mn2,n*arr[i].a);
//    pf("******** bal ********\n");
//    for(i=0;i<m;i++) pf("%lld %lld\n",arr[i].a,arr[i].b);
   // pf("mn2=%lld\n",mn2);
    for(i=k-1;i>=0;i--)
    {
        stemp=s;
        ntemp=0;
        if(stemp>=brr2[i])
        {
            ntemp=n-arr2[i];
          //  pf("ntemp =%lld\n",ntemp);
            mn1=min(mn1,ntemp);
            key=1;
            stemp-=brr2[i];
            if(ntemp>0){
            high=k-1;
            low=0;
            for(j=0;j<m;j++)
            {
                if(stemp>=arr[j].b)
                {
                   // chk1;
                   // pf("%lld %lld\n",arr[j].a,arr[j].b);
                    y=arr[j].a*ntemp;
                    mn=min(mn,y);
                    flag=1;
                    break;
                }
            }
            }
            else
            {
               // chk2;
                flag=1;
                mn=0;
                break;
            }
           // if(flag) break;
        }
    }
   // if(flag)
//   pf("mn= %lld\n",mn);
//   pf("mn2= %lld\n",mn2);
//   pf("mn1= %lld x=%lld\n",mn1*x,x);
//   pf("mn3= %lld\n",n*x);
    pfu(1LLU*min(1LLU*n*x,1LLU*min(1LLU*mn1*x,1LLU*min(mn,mn2))));
//    else if(key){
//            //chk1;
//        pfll(min(mn1*x,mn2));
//    }
//    else{ pfll(min(n*x,mn2));
//   // chk1;
//    }
    return 0;
}
