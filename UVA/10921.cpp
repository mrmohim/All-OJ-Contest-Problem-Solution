#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int main()
{
    char ch;
    while(scanf("%c",&ch)!=EOF)
    {
        if(isalpha(ch))
        {
            if(ch=='A' || ch=='B' || ch=='C')
                cout<<"2";
            else if(ch=='D' || ch=='E' || ch=='F')
                cout<<"3";
            else if(ch=='G' || ch=='H' || ch=='I')
                cout<<"4";
            else if(ch=='J' || ch=='K' || ch=='L')
                cout<<"5";
            else if(ch=='M' || ch=='N' || ch=='O')
                cout<<"6";
            else if(ch=='P' || ch=='Q' || ch=='R' || ch=='S')
                cout<<"7";
            else if(ch=='T' || ch=='U' || ch=='V')
                cout<<"8";
            else if(ch=='W' || ch=='X' || ch=='Y' || ch=='Z')
                cout<<"9";
            else if(ch=='\n')
                cout<<endl;
        }
        else
        {
            cout<<ch;
        }
    }
    return 0;
}
