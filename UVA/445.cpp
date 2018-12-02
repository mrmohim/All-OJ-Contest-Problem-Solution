#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int main()
{
    char ch;
    int m=0,i;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch=='\n')
        {
            cout<<endl;
            continue;
        }
        else if(isdigit(ch))
            m+=(ch-'0');
        else if(ch=='!')
        {
            cout<<endl;
            m=0;
        }
        else if(ch=='*')
        {
            for(i=1; i<=m; i++)
                cout<<"*";
            m=0;
        }
        else if(ch=='b')
        {
            for(i=1; i<=m; i++)
                cout<<" ";
            m=0;
        }
        else if(isupper(ch))
        {
            for(i=1; i<=m; i++)
                cout<<ch;
            m=0;
        }
        else if(ch=='\0')
            cout<<" ";
    }
    return 0;
}
