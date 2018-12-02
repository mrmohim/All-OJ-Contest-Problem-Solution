#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int gcd(int x,int y)
{
    if(y==0)
        return x;
    return gcd(y,x%y);
}
int main()
{
    int n,m,t,i,s,a,b;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d%d",&m,&n);
        a=gcd(m,n);
        s=m/a+n/a;
        if(n==m)
            s=2;
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
