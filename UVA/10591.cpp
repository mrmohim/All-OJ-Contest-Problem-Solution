#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    long long t,n,i,k,x,y,s;
    char ch[1000];
    cin>>t;
    for(k=1; k<=t; k++)
    {
        cin>>n;
        y=n;
        while(sprintf(ch,"%lld",n))
        {
            x=strlen(ch);
            s=0;
            for(i=0; i<x; i++)
            {
                s+=((ch[i]-'0')*(ch[i]-'0'));
            }
            if(s==1)
            {
                printf("Case #%lld: %lld is a Happy number.\n",k,y);
                break;
            }
            if(s==4)
            {
                printf("Case #%lld: %lld is an Unhappy number.\n",k,y);
                break;
            }
            n=s;
        }
    }
    return 0;
}

