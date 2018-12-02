#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int n,s,x,sum,y,i;
    while(scanf("%d%d",&n,&s)!=EOF)
    {
        sum=y=i=0;
        while(n--)
        {
            scanf("%d",&x);
            if(y<x)
            {
                if(sum<s)
                    i+=1;
                sum+=x;
                y=x;
            }
        }
        printf("%d\n",i);
    }
    return 0;
}
