#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long ch[1000000];
int main()
{
    long long t,m,n,x,i,s;
    cin>>t;
    while(t--)
    {
        cin>>x>>m;
        for(i=0; i<m; i++)
            cin>>ch[i];
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
        cout<<s<<endl;
    }
    return 0;
}
