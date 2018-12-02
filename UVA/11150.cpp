#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    long long n,m,a,b,i=0,j;
    while(cin>>n)
    {
        m=n;
        if(n==1)
            i=1;
        while(n!=0 && i==0)
        {
            m+=n/3;
            if(n==2)
                n=n+1;
            else if(n==1)
                n=n+2;
            else if(n==3)
                n=0;
            else
                n=n/3+(n%3);
        }
        i=0;
        cout<<m<<endl;
    }
    return 0;
}
