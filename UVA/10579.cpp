#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std ;
#define mx 10000
long long ch[mx][mx];
void fibo()
{
    int i,j,k;
    ch[0][0]=0;
    ch[1][0]=1;
    ch[2][0]=1;
    for(i=3; i<mx; i++)
    {
        for(j=0; j<1005; j++)
        {
            ch[i][j]=ch[i][j]+ch[i-2][j]+ch[i-1][j];
            if(ch[i][j]>=10)
            {
                ch[i][j+1]=ch[i][j]/10;
                ch[i][j]=ch[i][j]%10;

            }
        }
    }
}
int main()
{
    fibo();
    int i,j,n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            cout<<"0";
        else
        {
            for(i=1004; i>=0; i--)
            {
                if(ch[n][i]!=0)
                    break;
            }
            for(j=i; j>=0; j--)
                cout<<ch[n][j];
        }
        cout<<endl;
    }
    return 0;
}
