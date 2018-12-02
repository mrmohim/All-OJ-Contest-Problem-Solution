#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int n, i, m, x;
    scanf("%lld%lld",&n,&m);
    printf("%lld\n", ((n/m)+1)*m);
    return 0;
}
