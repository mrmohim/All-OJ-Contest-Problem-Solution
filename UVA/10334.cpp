#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std ;
#define mx 1010
char ch[mx][mx];
void fibo()
{
    long long i,n,m,x,y,a,b,j;
    ch[0][0]='1';
    ch[0][1]='\0';
    ch[1][0]='2';
    ch[1][1]='\0';
    for(i=2; i<=mx; i++)
    {
        x=strlen(ch[i-1]);
        y=strlen(ch[i-2]);
        if(x<y)
        {
            n=x;
            x=y;
            y=n;
        }
        a=0;
        m=0;
        for(j=0; j<x; j++)
        {
            if(ch[i-1][j]=='\0')
                ch[i-1][j]='0';
            if(ch[i-2][j]=='\0')
                ch[i-2][j]='0';
            a=((ch[i-1][j]-'0')+(ch[i-2][j]-'0'))+m;
            b=a%10;
            m=a/10;
            ch[i][j]=b+'0';
        }
        if(m!=0)
        {
            ch[i][j]=m+'0';
            ch[i][j+1]='\0';
        }
        else
            ch[i][j]='\0';
    }
}
int main()
{
    fibo();
    long long n,m,j;
    while(scanf("%lld",&n)!=EOF)
    {
        m=strlen(ch[n]);
        j=0;
        for(int i=m-1; i>=0; i--)
        {
            if(ch[n][i]!='0')
                j=1;
            if(j==1)
                cout<<ch[n][i];
        }
        cout<<endl;
    }
    return 0;
}

