#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    long long n,x,a,i=0;
    while(scanf("%lld",&n)!=EOF && n>=0)
    {
        x=1;
        a=0;
        i+=1;
        while(n>x)
        {
            x*=2;
            a+=1;
        }
        cout<<"Case "<<i<<": "<<a<<endl;
    }
    return 0;
}
