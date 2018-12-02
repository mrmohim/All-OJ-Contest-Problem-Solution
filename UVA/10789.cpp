#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;
#define mx 100000
long long ar[mx],ch[mx];
void sive()
{
    long long int i,j,k,n;
    for(i=2; i<=mx; i+=2)
        ar[i]=1;
    ar[0]=ar[1]=1;
    ar[2]=0;
    k=sqrt(mx);
    for(i=3; i<=k; i+=2)
    {
        for(j=i+i; j<=mx; j+=i)
            ar[j]=1;
    }
}
int main()
{
    sive();
    int i,j,t,k,s;
    char c;
    cin>>t;
    getchar();
    for(k=1; k<=t; k++)
    {
        while(scanf("%c",&c)!=EOF)
        {
            s=0;
            if(c!='\n')
            {
                i=(int)c;
                ch[i]+=1;
            }
            else
            {
                printf("Case %d: ",k);
                for(i=48; i<=57; i++)
                {
                    j=ch[i];
                    if(ar[j]==0)
                    {
                        printf("%c",i);
                        s=1;
                    }
                    ch[i]=0;
                }
                for(i=65; i<=90; i++)
                {
                    j=ch[i];
                    if(ar[j]==0)
                    {
                        printf("%c",i);
                        s=1;
                    }
                    ch[i]=0;
                }
                for(i=97; i<=122; i++)
                {
                    j=ch[i];
                    if(ar[j]==0)
                    {
                        printf("%c",i);
                        s=1;
                    }
                    ch[i]=0;
                }
                if(s==0)
                    cout<<"empty"<<endl;
                else
                    cout<<endl;
                break;
            }
        }
    }
    return 0;
}
