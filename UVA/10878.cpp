#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    char s[100000];
    int i=0,j,k;
    while(i!=2)
    {
        gets(s);
        k=strlen(s);
        for(j=0;j<k;j++)
        {
            if(s[j]!='_')
            {
                break;
            }
        }
        if(j==k)
            i+=1;
    }
    cout<<"A quick brown fox jumps over the lazy dog.";
    return 0;
}

