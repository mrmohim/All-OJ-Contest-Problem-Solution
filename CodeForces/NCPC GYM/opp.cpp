#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char str[201],temp;
    int i,n,j;
    cin>>str;
    n=strlen(str);
    for(i=0; i<n-2; i=i+2)
    {
        for(j=i+2; j<n; j=j+2)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
        cout<<str[i];
    cout<<endl;
    return 0;
}
