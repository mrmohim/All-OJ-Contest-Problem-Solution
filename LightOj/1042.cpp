#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<cctype>
#include<algorithm>
using namespace std;
long long ch[1000];
int main()
{
    long long n,s,i,j,t,k,cnt1,cnt2,c,a;
    scanf("%lld",&t);
    for(k=1; k<=t; k++)
    {
        scanf("%lld",&n);
        s=0;
        cnt1=0;
        cnt2=0;
        for(i=0; n>0; i++)
        {
            if(n%2==1)
            {
                ch[i]=1;
                cnt1+=1;
            }
            n=n/2;
        }
        for(j=0;; j++)
        {
            if(ch[j]==1)
            {
                while(ch[j]==1)
                {
                    ch[j]=0;
                    j++;
                }
                ch[j]=1;
                break;
            }
        }
        if(i==j)
            a=j+1;
        else
            a=i;
        for(i=0; i<a; i++)
        {
            if(ch[i]==1)
                cnt2++;
            else
                continue;
        }
        c=cnt1-cnt2;
        for(i=0; i<c; i++)
        {
            ch[i]=1;
        }
        for(i=0; i<a; i++)
        {
            s+=ch[i]*pow(2,i);
        }
        printf("Case %lld: %lld\n",k,s);
        memset(ch,0,sizeof(ch));
    }
    return 0;
}
