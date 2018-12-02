#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
char ch[100000000];
int main()
{
    int i=0,n,a,b,t;
    while(scanf("%s",ch)!=EOF)
    {
        cin>>n;
        cout<<"Case "<<++i<<":\n";
        while(n--)
        {
            cin>>a>>b;
            if(a>b)
            {
                t=a;
                a=b;
                b=t;
            }
            if(ch[a]=='0')
            {
                if(count(ch+a,ch+b+1,'1')==0)
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
            }
            else
            {
                if(count(ch+a,ch+b+1,'0')==0)
                    cout<<"Yes\n";
                else
                    cout<<"No\n";
            }
        }
    }
    return 0;
}
