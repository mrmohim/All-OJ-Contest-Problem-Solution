#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;
int main()
{
    long n,m,s,i,j,x;
    char ch[10000],c;
    while(scanf("%ld%ld%c",&n,&m,&c)!=EOF && n!=0 && m!=0)
    {
        s=0;
        for(i=1; i<=n; i++)
        {
            gets(ch);
            x=strlen(ch);
            for(j=0; j<x; j++)
            {
                if(isdigit(ch[j]))
                {
                    s+=(ch[j]-'0');
                    break;
                }
            }
        }
        printf("%ld\n",s);
    }
    return 0;
}
