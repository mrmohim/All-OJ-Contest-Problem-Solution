#include<iostream>
#include<cstdio>
#include<cstring>
#include<cctype>
#include<algorithm>
using namespace std;
int main()
{
    int n,r,s,i=0;
    while(scanf("%d%d",&r,&n)!=EOF && n!=0 && r!=0)
    {
        s=(r-1)/n;
        if(s>26)
            printf("Case %d: impossible\n",++i);
        else
            printf("Case %d: %d\n",++i,s);
    }
    return 0;
}
