#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long ch1[1000000],ch2[1000000];
int main()
{
    long long a,b,s,i,j;
    while(scanf("%lld%lld",&a,&b)!=EOF && a!=0 && b!=0)
    {
        s=0;
        for(i=0; i<a; i++)
            scanf("%lld",&ch1[i]);
        for(i=0; i<b; i++)
            scanf("%lld",&ch2[i]);
        for(i=0,j=0; i<a && j<b; )
        {
            if(ch1[i]==ch2[j])
            {
                s+=1;
                i++;
                j++;
            }
            else if(ch1[i]>ch2[j])
                j++;
            else
                i++;
        }
        printf("%lld\n",s);
    }
    return 0;
}
