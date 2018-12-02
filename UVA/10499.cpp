#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    long long n;
    char c='%';
    while(scanf("%lld",&n)!=EOF && n>0)
    {
        if(n==1)
            printf("0%c\n",c);
        else
            printf("%lld%c\n",n*25,c);
    }
    return 0;
}
