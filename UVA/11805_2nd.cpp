#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,k,p,i,j,s;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n>>k>>p;
        s=(p%n)+k;
        if(s>n)
            s=s-n;
        cout<<"Case "<<i<<": "<<s<<endl;
    }
    return 0;
}

