#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
long long ch[10000],i,n;
void mohim()
{
    ch[1]=1;
    ch[2]=2;
    for(i=3;i<=50;i++)
    {
        ch[i]=ch[i-1]+ch[i-2];
    }
}
int main()
{
    mohim();
    while(scanf("%d",&n)!=EOF && n!=0)
        cout<<ch[n]<<endl;
    return 0;
}
