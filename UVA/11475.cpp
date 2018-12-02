#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    int t,i,n,l,k,j;
    string ch1,ch2;
    while(cin>>ch1)
    {
        n=ch1.size();
        ch2=ch1;
        reverse(ch2.begin(),ch2.end());
        if(ch1==ch2)
            cout<<ch1;
        else
        {
            for(j=0; j<n; j++)
            {
                l=n;
                for(k=j; k<n; k++)
                {
                    l-=1;
                    if(ch1[k]!=ch1[l])
                        break;
                }
                if(k==n)
                {
                    l-=1;
                    break;
                }
            }
            cout<<ch1;
            for(j=l; j>=0; j--)
                cout<<ch1[j];
        }
        cout<<endl;
    }
    return 0;
}
