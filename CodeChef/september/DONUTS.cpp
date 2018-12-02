#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long ch[10000000];
int main()
{
    long long t,m,n,x,i,s;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&x,&m);
        for(i=0; i<m; i++)
            scanf("%lld",&ch[i]);
        sort(ch,ch+m);
        n=m-1;
        s=0;
        for(i=0; i<m; i++)
        {
            if(ch[i]>=n)
            {
                s+=n;
                break;
            }
            else
            {
                n-=(ch[i]+1);
                s+=ch[i];
            }
        }
        printf("%lld\n",s);
    }
    return 0;
}
