#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,x,i,j,m[10010],a,b,s;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
            cin>>m[i];
        cin>>x;
        sort(m,m+n);
        for(i=0,j=n-1; i<j; )
        {
            s=m[i]+m[j];
            if(s==x)
            {
                a=i++;
                b=j--;
            }
            else if(s<x)
                i++;
            else
                j--;
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",m[a],m[b]);
    }
    return 0;
}



