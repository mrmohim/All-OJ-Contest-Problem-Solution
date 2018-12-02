#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std ;
int main()
{
    int n,x,y,i,m[10000],j=0,a,s;
    while(scanf("%d",&n)!=EOF && n!=0)
    {
        cin>>x>>y;
        x=x*y;
        j+=1;
        s=0;
        for(i=0; i<n; i++)
        {
            cin>>m[i];
            s+=m[i];
        }
        sort(m,m+n);
        a=0;
        for(i=0; i<n; i++)
        {
            if(x%m[i]!=0)
            {
                a=1;
                break;
            }
        }
        if(a==0 && s==x)
            cout<<"Case "<<j<<": Yes\n";
        else
            cout<<"Case "<<j<<": No\n";
    }
    return 0;
}


