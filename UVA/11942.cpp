#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t,i,ch[12],s,j;
    cin>>t;
    cout<<"Lumberjacks:\n";
    for(i=1; i<=t; i++)
    {
        s=0;
        cin>>ch[1];
        cin>>ch[2];
        if(ch[1]<ch[2])
        {
            for(j=3; j<=10; j++)
            {
                cin>>ch[j];
                if(ch[j-1]>ch[j])
                    s=1;
            }
        }
        else
        {
            for(j=3; j<=10; j++)
            {
                cin>>ch[j];
                if(ch[j-1]<ch[j])
                    s=1;
            }
        }
        if(s==0)
            cout<<"Ordered\n";
        else
            cout<<"Unordered\n";
    }
    return 0;
}
