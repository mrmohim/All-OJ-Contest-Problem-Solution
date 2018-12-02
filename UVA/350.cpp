#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    long long z,i,m,l,j,x,s,ch[10000],y,w=0;
    while(scanf("%lld%lld%lld%lld",&z,&i,&m,&l)!=EOF && z!=0 && i!=0 && m!=0 && l!=0)
    {
        s=-1;
        x=l;
        w+=1;
        for(j=0;j>=0;j++)
        {
            l=((z*l)+i)%m;
            s+=1;
            ch[j]=l;
            if(count(ch,ch+j+1,l)>1)
                break;
        }
        printf("Case %lld: %lld\n",w,s);
    }
    return 0;
}
