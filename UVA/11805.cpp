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
        s=k;
        for(j=1;j<=p;j++)
        {
            s+=1;
            if(s>n)
                s=1;
        }
        cout<<"Case "<<i<<": "<<s<<endl;
    }
    return 0;
}
