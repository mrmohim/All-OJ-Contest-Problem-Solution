#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
long long ii[250050],jj[250050];
int main()
{
    long long a,s,t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cin>>a;
                ii[a]=i;
                jj[a]=j;
            }
        }
        s=0;
        for(k=1; k<(n*n); k++)
        {
            s+=(abs(ii[k]-ii[k+1])+abs(jj[k]-jj[k+1]));
        }
        cout<<s<<endl;
    }
    return 0;
}
