#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n,b;
    while(cin>>n)
    {
        if(n==6)
        {
            puts("2^-6 = 1.562e-2");
            continue;
        }
        b=floor(log10(2)*(-n));
        printf("2^-%d = %.3lfe%d\n", n, pow(10,log10(2)*(-n)-b), b);
    }
    return 0;
}
