#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    unsigned long long x,n;
    while(scanf("%llu",&n)!=EOF && n!=0)
    {
        x=(n*10)/9;
        if(n%9==0)
            printf("%llu %llu\n",x-1,x);
        else
            printf("%llu\n",x);
    }
    return 0;
}
