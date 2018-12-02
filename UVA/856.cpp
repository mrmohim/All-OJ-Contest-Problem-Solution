#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long t,i,x,y,s;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&x,&y);
        s=0;
        for(i=x+1;i<=y;i++)
        {
            if(i%10==0)
                s+=1;
            else if((x%(i%10))==0)
                continue;
            else
                s+=1;
        }
        printf("%lld\n",s);
    }
    return 0;
}
