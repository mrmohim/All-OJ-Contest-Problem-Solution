#include<bits/stdc++.h>
using namespace std;
#define mx 2000000000
long long int ar[mx];
void sive()
{
    long long int i,j,k,n;
    for(i=2; i<=mx; i+=2)
        ar[i]=1;
    ar[0]=ar[1]=1;
    ar[2]=0;
    k=sqrt(mx);
    for(i=3; i<=k; i+=2)
    {
        for(j=i+i; j<=mx; j+=i)
            ar[j]=1;
    }
}
int main()
{
    sive();
    long long int i,m,n,t,j;
    while(cin>>n)
    {
        if(ar[n]==0)
            cout<<"Prime\n";
        else
            cout<<"Not Prime\n";
    }
    return 0;
}
