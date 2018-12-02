#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std ;
int main()
{
    int i;
    char c,ch[]= {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']', '\\', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '\'', 'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/', '`', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '-', '='};
    while(scanf("%c",&c)!=EOF)
    {
        if(c==' ' || c=='\n')
            cout<<c;
        else
        {
            for(i=1; i<strlen(ch); i++)
            {
                if(c==ch[i])
                {
                    cout<<ch[i-2];
                    break;
                }
            }
        }
    }
    return 0 ;
}
