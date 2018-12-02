#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std ;
int main()
{
    int n,i=0;
    char c;
    while(scanf("%c",&c)!=EOF)
    {
        if(islower(c))
            c=toupper(c);
        if(c=='\n')
        {
            cout<<"\n";
            n=0;
        }
        else if(c=='B' || c=='F' || c=='P' || c=='V')
            n=1;
        else if(c=='C' || c=='G' || c=='J' || c=='K' || c=='Q' || c=='S' || c=='X' || c=='Z')
            n=2;
        else if(c=='D' || c=='T')
            n=3;
        else if(c=='L')
            n=4;
        else if(c=='M' || c=='N')
            n=5;
        else if(c=='R')
            n=6;
        else
            n=0;
        if(n!=i && n!=0)
            cout<<n;
        i=n;
    }
    return 0 ;
}
