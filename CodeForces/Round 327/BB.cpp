#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <cctype>
using  namespace  std;
long long ar[150];
string s;
int main()
{
    long long n,m,x,y,i,j;
    char a,b,c;
    for(i=97;i<=122;i++)
    {
        ar[i]=i;
    }
    scanf("%I64d%I64d",&n,&m);
    cin>>s;
    for(i=1;i<=m;i++)
    {
        scanf("%c%c%c%c",&c,&a,&c,&b);
        x=a;
        y=b;
        if(x!=y)
        {
            for(j=97;j<=122;j++)
            {
                if(ar[j]==x)
                    ar[j]=y;
                else if(ar[j]==y)
                    ar[j]=x;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        x=s[i];
        printf("%c",ar[x]);
    }
    return 0;
}
