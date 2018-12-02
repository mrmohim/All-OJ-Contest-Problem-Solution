#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,i,s;
    long long x,y,n,r,c;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        x=ceil(sqrt((double)(n)));
        if(x*x-n<x)
        {
            r=x;
            c=x*x-n+1;
        }
        else
        {
            r=-x*x+2*x+n-1;
            c=x;
        }
        cout<<"Case "<<i<<": "<<r<<" "<<c<<endl;
    }
    return 0;
}

