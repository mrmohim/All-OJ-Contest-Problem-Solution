#include<iostream>
#include<cstdio>
#include<cstring>
#include<ctype.h>
using namespace std;
int main()
{
    char str[51];
    int i;
    while(gets(str))
    {
        int cont=0;
        for(i=0; str[i]!='\0'; i++)
        {
            if(str[i]==' ')
                cout<<" ";
            else
            {
                if(cont%2==0)
                {
                    str[i]=toupper(str[i]);
                    cout<<str[i];
                    cont++;
                }
                else
                {
                    str[i]=tolower(str[i]);
                    cout<<str[i];
                    cont++;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
