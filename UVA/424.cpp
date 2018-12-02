#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char ch[100000000],ch1[100000000];
int main()
{
    int i,n,j,x,y,t,s,a,b;
    gets(ch);
    while(gets(ch1))
    {
        a=0;
        if(ch1[0]=='0')
        {
            x=strlen(ch);
            for(i=0; i<x; i++)
            {
                cout<<ch[i];
            }
            cout<<endl;
            break;
        }
        x=strlen(ch);
        reverse(ch,ch+x);
        y=strlen(ch1);
        reverse(ch1,ch1+y);
        if(x<y)
        {
            t=x;
            x=y;
            y=t;
        }
        for(i=0; i<x; i++)
        {
            if(ch[i]=='\0')
                ch[i]='0';
            if(ch1[i]=='\0')
                ch1[i]='0';
            s=(ch[i]-'0')+(ch1[i]-'0')+a;
            if(s>9)
            {
                ch[i]=(s%10)+'0';
                a=s/10;
            }
            else
            {
                ch[i]=s+'0';
                a=0;
            }
        }
        if(a!=0)
            ch[i]=a+'0';
        x=strlen(ch);
        reverse(ch,ch+x);
    }
    return 0;
}
