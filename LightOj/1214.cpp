#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
char ar[10000000],ch[10000000],str[10000000];
using namespace std;
int main()
{
    long long t,n,m,x,y,i,j,s,z;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>str>>n;
        cout<<"Case "<<i<<": ";
        z=fabs(n);
        sprintf(ar,"%lld",z);
        x=strlen(ar);
        y=strlen(str);
        s=-1;
        for(j=y-1;j>=y-x;j--)
        {
            s+=1;
            ch[s]=str[j];
        }
        m=atoll(ch);
        if(str[0]=='-')
            n=fabs(n);
        if(m%n==0)
            cout<<"divisible"<<endl;
        else
            cout<<"not divisible"<<endl;
    }
    return 0;
}
