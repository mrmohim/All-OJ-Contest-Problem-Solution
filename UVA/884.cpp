#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    long long t,n,i,k,x,y,s;
    char ch[1000];
    while(cin>>t)
    {
        s=1;
        for(k=1; k<=t; k++)
        {
            s*=k;
        }
        cout<<s<<endl;
    }
    return 0;
}
