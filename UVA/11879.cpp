#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n,i,s,r,x,y;
    char ch[110];
    while(gets(ch))
    {
        n=strlen(ch);
        if(n==1 && ch[0]=='0')
            break;
        else
        {
            r=0;
            for(i=0;i<n;i++)
            {
                s=r*10+(ch[i]-'0');
                r=s%17;
            }
            if(r==0)
                cout<<"1\n";
            else
                cout<<"0\n";
        }
    }
    return 0;
}

