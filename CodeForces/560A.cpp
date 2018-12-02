#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    long long ch[1002],i,n,s=1000,x;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>ch[i];
    for(i=0;i<n-1;i++)
    {
        x=ch[i]-ch[i+1];
        if(x<s)
            s=x;
    }
    cout<<s;
    return 0;
}
