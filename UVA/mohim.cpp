#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    int i,j,n,t;
    char cha[30];
    cin>>t;
    while(t--)
    {
        cin>>n;
        getchar();
        gets(cha);
        if(n==1)
        {
            cout<<n<<endl<<cha[0]<<endl;
            continue;
        }
        cout<<(n-1)+(n-2)<<endl;
        if(n%2==1)
            n=n-1;
        for(j=0; j<n; j+=2)
        {
            cout<<cha[j+1]<<cha[j];
        }
        if((n+1)%2==1)
            cout<<cha[n];
        cout<<endl;
    }
    return 0;
}
