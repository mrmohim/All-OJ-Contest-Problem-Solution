#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
long ch[2000010];
int main()
{
    long long n,i;
    while(scanf("%ld",&n)!=EOF && n!=0)
    {
        for(i=0; i<n; i++)
            cin>>ch[i];
        sort(ch,ch+n);
        for(i=0; i<n; i++)
        {
            cout<<ch[i];
            if(i<(n-1))
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}

