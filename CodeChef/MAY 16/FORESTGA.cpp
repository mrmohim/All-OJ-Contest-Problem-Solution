/****** HAREE KRISHNA   ******/

//#include<bits/stdc++.h>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cctype>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<queue>
#include<map>
#include<stack>
#include<list>
#include<climits>

using namespace std;

typedef long int ld;
typedef long long int lld;
typedef float f;
typedef double lf;
typedef unsigned int u;
typedef unsigned long int lu;
typedef unsigned long long int llu;
typedef char C;

#define sf scanf
#define pf printf
#define ff first
#define ss second
#define PI acos(-1.0)
#define sq(x) (x)*(x)
#define rep(i,x,cases) for(i=x;i<cases;i++)
#define repin(i,cases,x) for(i=cases;i>=x;i--)
#define nn printf("\n")
#define mem(arr,val) memset(arr,val,sizeof(arr))
#define TEST int test,zz;scanf("%d",&zz);for(test=1;test<=zz;test++)

#define sci(x) scanf("%d",&x)
#define sci2(x,y) scanf("%d %d",&x,&y)
#define sci3(x,y,z) scanf("%d %d %d",&x,&y,&z)

#define pfi(x) printf("%d\n",x)
#define pfi2(x,y) printf("%d %d\n",x,y)
#define pfi3(x,y,z) printf("%d %d %d\n",x,y,z)

#define scl(x) scanf("%ld",&x)
#define scl2(x,y) scanf("%ld %ld",&x,&y)
#define scl3(x,y,z) scanf("%ld %ld %ld",&x,&y,&z)

#define scs(str) scanf("%s",str)

#define pfs(str) printf("%s\n",str)

#define pb push_back

// ASCII Vlaue
// A=65,Z=90,a=97,z=122,0=48,9=57

#define chk1 printf("chek1\n")
#define chk2 printf("chek2\n")
#define chk3 printf("chek3\n")
#define sz 100005

/******   start your code   *******/

pair<lld,lld> pr[sz];

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    bool key;
    C ch1,ch2,ch;
    lld i,j,n,m,a,b,k,w,l,tc,cnt,res,ans,total,temp,num1,num2,num3,num;
    lld low,mid,high;
    //TEST // "test" as variable
    //while(1)
    {
        sf("%lld %lld %lld",&n,&w,&l);
        rep(i,0,n)
        sf("%lld %lld",&pr[i].ff,&pr[i].ss);
        if(w<=10000)
        {
            for(lld q=0; q<=10000; q++)
            {
                num=0;
                for(lld p=0; p<n; p++)
                {
                    m=pr[p].ff+(pr[p].ss*q);
                    if(m>=l)
                        num+=m;
                }
                if(num>=w)
                {
                    pf("%lld\n",q);
                    return 0;
                }
            }
        }
        else
        {
            low=0,high=1e18;
            while(low<=high)
            {
                key=true;
                mid=(low+high)/2;
                res=0;
                rep(i,0,n)
                {
                    temp=pr[i].ff+(pr[i].ss*mid);
                    if(temp>=l)
                        res+=temp;
                    if(res>=w)
                    {
                        key=false;
                        break;
                    }
                }
                if(res==w)
                    break;
                else if(key)
                    low=mid+1;
                else
                    high=mid-1;
            }
            res=0;
            key=true;
            rep(i,0,n)
            {
                temp=pr[i].ff+pr[i].ss*(mid-1);
                if(temp>=l)
                    res+=temp;
                if(res>=w)
                {
                    key=false;
                    break;
                }
            }
            if(!key)
            {
                if(mid!=0)
                    pf("%lld\n",mid-1);
                else
                    pf("%lld\n",mid);
            }
            if(key)
            {
                res=0;
                temp=0;
                rep(i,0,n)
                {
                    temp=pr[i].ff+(pr[i].ss*(mid-2));
                    //pf("temp = %lld\n",temp);
                    if(temp>=l)
                        res+=temp;
                    if(res>=w)
                    {
                        //pf("res = %lld %lld\n",res,w);
                        key=false;
                        break;
                    }
                }
                //pf("res = %lld\n",res);
                if(!key)
                    pf("%lld\n",mid-2);
            }
            if(key)
            {
                res=0;
                temp=0;
                rep(i,0,n)
                {
                    temp=pr[i].ff+(pr[i].ss*(mid));
                    //pf("temp = %lld\n",temp);
                    if(temp>=l)
                        res+=temp;
                    if(res>=w)
                    {
                        //pf("res = %lld %lld\n",res,w);
                        key=false;
                        break;
                    }
                }
                //pf("res = %lld\n",res);
                if(!key)
                    pf("%lld\n",mid);
            }
            if(key)
            {
                key=true;
                res=0;
                temp=0;
                rep(i,0,n)
                {
                    temp=pr[i].ff+(pr[i].ss*(mid+1));
                    //pf("temp = %lld\n",temp);
                    if(temp>=l)
                        res+=temp;
                    if(res>=w)
                    {
                        //pf("res = %lld %lld\n",res,w);
                        key=false;
                        break;
                    }
                }
                //pf("res = %lld\n",res);
                if(!key)
                    pf("%lld\n",mid+1);
            }
            if(key)
            {
                key=true;
                res=0;
                temp=0;
                rep(i,0,n)
                {
                    temp=pr[i].ff+(pr[i].ss*(mid+2));
                    //pf("temp = %lld\n",temp);
                    if(temp>=l)
                        res+=temp;
                    if(res>=w)
                    {
                        //pf("res = %lld %lld\n",res,w);
                        key=false;
                        break;
                    }
                }
                //pf("res = %lld\n",res);
                if(!key)
                    pf("%lld\n",mid+2);
            }
        }
    }
    return 0;
}

/*
input:
3 74 51
2 2
5 7
2 9

3 60 20
20 1
20 1
20 1

output:
7

*/
