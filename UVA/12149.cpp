#include<iostream>
#include<cstdio>
using namespace std ;
#define mx 105
long long ar[mx];
void mohim()
{
    long long i,s=0;
    for(i=1;i<=mx;i++)
    {
        s+=(i*i);
        ar[i]=s;
    }
}
int main()
{
    mohim();
    long long n;
    while(scanf("%lld",&n)!=EOF && n!=0)
    {
        printf("%lld\n",ar[n]);
    }
    return 0;
}
