#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    unsigned long long a,b,t,i,j,x,y;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        x=a;
        y=a;
        for(j=a+1;j<=b;j++)
        {
            x|=j;
            y&=j;
        }
        cout<<"Case "<<i<<": "<<x<<" "<<y<<endl;
    }
    return 0;
}
