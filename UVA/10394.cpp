#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std ;
#define mx 18500000
long long int ar[mx],ch[100010][4],y;
void sive()
{
    long long int i,j,k,n,m=2,x=0;
    for(i=2; i<=mx; i+=2)
        ar[i]=1;
    ar[0]=ar[1]=1;
    ar[2]=0;
    k=sqrt(mx);
    for(i=3; i<=k; i+=2)
    {
        for(j=i+i; j<=mx; j+=i)
        {
            ar[j]=1;
        }
    }
    for(i=3; i<=mx; i++)
    {
        if(ar[i]==0)
        {
            if(i-m==2)
            {
                x+=1;
                ch[x][1]=m;
                ch[x][2]=i;
                y=x;
                if(x==100000)
                    break;
            }
            m=i;
        }
    }
}
int main()
{
    sive();
    long long int n;
    while(scanf("%lld",&n)!=EOF)
    {
        printf("(%lld, %lld)\n",ch[n][1],ch[n][2]);
    }
    return 0;
}

