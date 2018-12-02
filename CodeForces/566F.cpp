#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    long long ch[10000],i,j,t,n,k,s,x,y[10000],m=1,ans;
    cin>>t;
    for(i=0; i<t; i++)
        cin>>ch[i];
    sort(ch,ch+t);
    for(i=0; i<t-1; i++)
    {
        x=ch[i];
        y[0]=x;
        s=1;
        for(j=i+1; j<t; j++)
        {
            for(k=0; k<s; k++)
            {
                if(ch[j]%y[k]!=0)
                {
                    break;
                }
            }
            if(k==s)
            {
                s+=1;
                y[s-1]=x;
                x=ch[j];
            }
        }
        if(m<s)
        {
            m=s;
            ans=ch[i];
        }
    }
    cout<<ans;
    return 0;
}

