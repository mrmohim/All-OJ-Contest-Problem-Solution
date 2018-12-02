#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char ch[10000],cc;
    int t,i,j,a,b,c,d,n;
    scanf("%d%c",&t,&cc);
    while(t--)
    {
        scanf("%s%c",ch,&cc);
        n=strlen(ch);
        a=count(ch,ch+n,'(');
        b=count(ch,ch+n,')');
        c=count(ch,ch+n,'[');
        d=count(ch,ch+n,']');
        if(a==b && c==d)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
