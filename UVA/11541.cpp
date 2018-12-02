#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n,i,t,j,k;
    char c;
    cin>>t;
    getchar();
    for(i=1; i<=t; i++)
    {
        k=0;
        while(scanf("%c",&c)!=EOF)
        {
            if(c=='\n')
                break;
            scanf("%d",&n);
            if(k==0)
            {
                printf("Case %d: ",i);
                k=1;
            }
            for(j=1;j<=n;j++)
                printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
