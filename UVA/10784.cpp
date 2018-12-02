#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    double x;
    long long n,i=0,s;
    while(scanf("%lld",&n)!=EOF && n!=0)
    {
        i+=1;
        x=(3.0+sqrt(9.0+(8.0*n)))/2.0;
        s=x;
        if(s!=x)
            s+=1;
        cout<<"Case "<<i<<": "<<s<<endl;
    }
    return 0;
}
