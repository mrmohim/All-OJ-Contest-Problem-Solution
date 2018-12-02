#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    long long o,n,i,x,m,j;
    long long ch[]= {9,99,999,9999,99999,999999,9999999,99999999,999999999,9999999999,99999999999};
    char ab1[100],ab2[100];
    while(cin>>o)
    {
        if(o==0)
            break;
        sprintf(ab1,"%lld",o);
        n=strlen(ab1);
        if(n==1)
            cout<<o<<endl;
        else
        {
            for(i=0; i>=0; i++)
            {
                x=o-ch[i];
                sprintf(ab2,"%lld",x);
                m=strlen(ab2);
                if(x<=ch[i+1])
                {
                    if(m==1)
                    {
                        cout<<x<<x<<endl;
                        break;
                    }
                    else
                    {
                        for(j=0; j<m; j++)
                            cout<<ab2[j];
                        for(j=i; j>=0; j--)
                            cout<<ab2[j];
                        cout<<endl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}

