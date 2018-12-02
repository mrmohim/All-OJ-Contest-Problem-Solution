#include<cstdio>
#include<iostream>
using namespace std;
unsigned long long sum[10000010];
void fec()
{
    unsigned long long fact;
    sum[0]=0;
    fact=1;
    for(int i=1; i<=10000005; i++)
    {
        fact*=i;
        if(fact>100000007)
            fact=fact%100000007;
        sum[i]=sum[i-1]+fact;
    }
}
int main()
{
    fec();
    unsigned long long tc,ti,a,b;
    scanf("%llu",&tc);
    for(ti=1; ti<=tc; ti++)
    {
        scanf("%llu%llu",&a,&b);
        printf("%llu\n",(sum[b]-sum[a-1])%100000007);
    }
    return 0;
}
