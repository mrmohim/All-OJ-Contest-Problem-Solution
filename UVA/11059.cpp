#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    long long t,k=1,x,s,i,j,ch[30];
    while(cin>>t)
    {
        s=0;
        for(i=0; i<t; i++)
            cin>>ch[i];
        for(i=0; i<t; i++)
        {
            x=1;
            for(int j=i; j<t; j++)
            {
                x*=ch[j];
                if(x>s)
                    s=x;
            }
        }
        printf("Case #%lld: The maximum product is %lld.\n\n",k++,s);
    }
    return 0;
}
