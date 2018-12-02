#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,t,n,m,s,ch[110],x,y;
    char c;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>m;
        for(j=0; j<n; j++)
            cin>>ch[j];
        while(m--)
        {
            cin>>c;
            if(c=='S')
            {
                cin>>s;
                for(j=0; j<n; j++)
                    ch[j]+=s;
            }
            else if(c=='M')
            {
                cin>>s;
                for(j=0; j<n; j++)
                    ch[j]*=s;
            }
            else if(c=='D')
            {
                cin>>s;
                for(j=0; j<n; j++)
                    ch[j]/=s;
            }
            else if(c=='R')
            {
                reverse(ch,ch+n);
            }
            else if(c=='P')
            {
                cin>>x>>y;
                s=ch[x];
                ch[x]=ch[y];
                ch[y]=s;
            }
        }
        cout<<"Case "<<i<<":"<<endl;
        for(j=0; j<n-1; j++)
            cout<<ch[j]<<" ";
        cout<<ch[n-1]<<endl;
    }
    return 0;
}
