#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long LLU;
LLU pw[70];
int main()
{
    pw[0]=1;
    for(int i=1; i<=63; i++)
        pw[i]=pw[i-1]*2;

    LLU a,b,x,y;
    int cna=0,cnb=0;
    cin>>a>>b;
    x=a;
    y=b;
    while(x)
    {
        cna++;
        x/=2;
    }
    while(y)
    {
        cnb++;
        y/=2;
    }
    int ans=0;
    for(int i=cna; i<=cnb; i++)
        ans+=i-1;

    for(int i=cna-2; i>=0; i--)
    {
        x=pw[cna]-1-pw[i];

        if(a>x)
        {
            ans--;
        }
        else break;
    }

    for(int i=0; i<=cnb-2; i++)
    {
        y=pw[cnb]-1-pw[i];
        if(b<y)
        {
            ans--;
        }
        else break;
    }

    cout<<ans;

}
