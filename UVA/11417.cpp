#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    long n,i,s,j;
    while(scanf("%ld",&n)!=EOF && n!=0)
    {
        s=0;
        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                s+=gcd(i,j);
            }
        }
        printf("%ld\n",s);
    }
    return 0;
}
