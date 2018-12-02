#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
long long a[101000];
int main()
{
    long long k,n,g,h,i,l;
    scanf("%lld%lld",&n,&k);
    for(i=0; i<n; i++)
        scanf("%lld",&a[i]);
    sort(a,a+n);
    k=k-1;
    l=(k-1)/n;
    g=0;
    h=0;
    for(i=0; i<n; i++)
    {
        if(a[l]>a[i])
            g++;
        if(a[l]==a[i])
            h++;
    }
    cout<<a[l]<<" "<<a[(k-n*g)/h];
    return 0;
}
