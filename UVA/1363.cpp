#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    long long i,k,n,j,r=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        r+=(k%i);
    }
    cout<<r;
    return 0;
}
