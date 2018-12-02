#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,x,i,j,b,w,a,t;
    char c;
    cin>>x;
    for(i=1; i<=x; i++)
    {
        scanf("%d",&n);
        b=0;
        w=0;
        a=0;
        t=0;
        getchar();
        for(j=1; j<=n; j++)
        {
            scanf("%c",&c);
            if(c=='B')
                b+=1;
            else if(c=='W')
                w+=1;
            else if(c=='A')
                a+=1;
            else if(c=='T')
                t+=1;
        }
        printf("Case %d: ",i);
        if(a>0 && b==0 && t==0 && w==0)
            printf("ABANDONED\n");
        else if(t==0 && b==0)
            printf("WHITEWASH\n");
        else if(t==0 && w==0)
            printf("BANGLAWASH\n");
        else if(b>w)
            printf("BANGLADESH %d - %d\n",b,w);
        else if(b<w)
            printf("WWW %d - %d\n",w,b);
        else if(b==w)
            printf("DRAW %d %d\n",b,t);
    }
    return 0;
}
